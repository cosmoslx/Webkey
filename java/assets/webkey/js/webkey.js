      $(document).ready(function () {
//		$(".chd").addClass("ui-widget ui-widget-content");
//		$(".chb").buttonset();
//
//		PHONE.HTML
		var oldleftWidgetList = [];
		try{
			oldleftWidgetList = JSON.parse(getCookie("leftWidgetList"));
		}catch (e) {};
		$.each($(".right-container"),function(i, val){
			$(val).children(".right-header").children("span").before('<span class="ui-icon ui-icon-triangle-1-e"></span>');
			$(val).children(".right-header").addClass("ui-tabs-nav ui-helper-reset ui-helper-clearfix ui-widget-header ui-corner-all");
			$(val).children(".right-header").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
			$(val).children(".right-header").click(function(){
				if ($(val).children(".right-header").children(".ui-icon").hasClass("ui-icon-triangle-1-e"))
				{			
					var tog = $(val).children(".toggleable");
					if ($(val).attr('id') == "closeapplication")
						load_closeapplication();
					if ($(val).attr('id') == "killapplication")
						load_killapplication();
					if ($(val).attr('id') == "wifi")
						load_wifi();
					tog.show('fast'); 
					$(val).children(".right-header").children(".ui-icon").removeClass("ui-icon-triangle-1-e").addClass("ui-icon-triangle-1-s");
				}
				else
				{			
					$(val).children(".toggleable").hide('fast'); 
					$(val).children(".right-header").children(".ui-icon").removeClass("ui-icon-triangle-1-s").addClass("ui-icon-triangle-1-e");
				}
			});
			$(val).children(".toggleable").addClass("ui-widget ui-cornel-all");
			$(val).children(".toggleable").toggle();
			$('#res').dialog({ autoOpen: false, width: 500 });
		});

		// MENU
		if ($("#tabs").length)
		{
			$("#tabs").addClass("ui-tabs ui-widget ui-widget-content ui-cornel-all");
			$("#tabs ul").addClass("ui-tabs-nav ui-helper-reset ui-helper-clearfix ui-widget-header ui-corner-all");
			$("#tabs ul li").addClass("ui-state-default ui-corner-top");
			$.each($("#tabs ul li a"),function(i, val){
				if (val.href == window.location.href)
					$(val).parent().addClass("ui-tabs-selected ui-state-active");
			});
			$.each($("#tabs ul li a"),function(i, val){
				$(val).parent().hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
			});
			$("#menulastli").html(
				'<img src="icon.png" class="icon" style="float: left"/><div style="float: left; text-align: center; padding-left: 5px; font-weight: normal;">Webkey <<WEBVERSION>><br/> <<USERNAME>></div>'+
				'<div style="float: left; text-align: center; padding-left: 5px;">'+
				'<a id="configa" href="config" class="menurighta" target="_top" >`Config`</a> <br/>'+
				'<a href="logout" class="menurighta" onclick="try {document.execCommand(\'ClearAuthenticationCache\');} catch (exception) {};" target="_top">`Log out`</a>'+
				'</div>'+
				'<div style="float: left; padding-left: 5px; padding-top: 3px"><span id="ind" class="ui-icon ui-icon-check"></span></div>'
				);
			$(".menurighta").css("float","none");
			$(".menurighta").css("padding","1px");
			$(".menurighta").css("font-weight","normal");
			$.each($(".menurighta"),function(i, val){
				$(val).hover(function(){$(this).addClass("ui-state-hover").css("border","0px")},function(){$(this).removeClass("ui-state-hover")});
			});
			$.each($("#configa"),function(i, val){
				if (val.href == window.location.href)
					$(val).addClass("ui-tabs-selected ui-state-active").css("border","0px");
			});
			$("#menulastli").removeClass("ui-state-default ui-corner-top");
			$("body").addClass("zeromargin");
		}
		if ($("iframe").length)
		{
			$(window).resize( function(){
					 //setTimeout('alert($("tabs").height())',0);
					 setTimeout('$("iframe").css("height",$("html").height()-$("#tabs").height()-5+"px")',0);
			});
			setTimeout('$("iframe").css("height",$("html").height()-$("#tabs").height()-5+"px")',0);
		}
		else
		if (<<CHAT>>)
		{
			$("html").append('<div id="chatpopup"><div id="chatpopup1"></div><div id="chatpopup2"><textarea id="chatinput" onkeyup="return isEnter(event)" cols="35"></textarea></div></div>');
			hidechat();
			chatloadxml();
		}
		// LIGHT
		<<ADMIN
		var t = '<span style="float: left">`Adjust light`: </span>';
		for(var i=0;i <= 256; i+=16)
		{
			t += "<div id=\"light_"+i+"\" style=\"width:4px;height:16px;background-color:rgb("+i+","+i+","+i+");float:left\" onmouseover=\"document.getElementById('light_"+i+"').style.backgroundColor='red'\" onmouseout=\"document.getElementById('light_"+i+"').style.backgroundColor='rgb("+i+","+i+","+i+")'\" onclick=\"adjust("+i+")\"></div>"
		}
		$("#light").html(t);
		>>
		load_auto_widget();
		load_fast_calls();
		$("#screenshot").mousedown(function(event){
			moveevent = moveevent +'_' + coord(event) +'_1';
			pressed = true;
			moveLater();
		});
		$("#screenshot").mouseup(function(event){
			moveevent = moveevent +'_' + coord(event) +'_0';
			sendNow();
			pressed = false;
		});
		$("#screenshot").mousemove(function(event){
			if (pressed)
			{
				moveevent = moveevent +'_' + coord(event) +'_1';
				sendNow();
			}
		});
		$("#screenshot").mouseout(function(event){
			if (pressed)
			{
				moveevent = moveevent +'_' + coord(event) +'_0';
				sendNow();
				pressed = false;
			}
		});
		if ($(".right-container").length>0)
		{
			$.each(oldleftWidgetList,function(key,val){
				var el = $("#"+val);
				if(val != null && el.length && val.substring(0,4) != "run_" && val.substring(0,4) != "kill_" && val.substring(0,4) != "close_")
				{
					var p = el.parent();
					toggle_widget(el,p);
				}
				else
				if (val != null)
				{
					$("#leftside").append("<div id='"+val+"' class='widget widget-left'><div class='widget-container'>`loading`...</div></div>");
					leftWidgetList.push(val);
					setCookie("leftWidgetList",JSON.stringify(leftWidgetList),365);
				}
			});
		}
      }); // document.ready

var pressed = false;
var MQueue = false;
var leftWidgetList = [];


// from w3schools.com
function setCookie(c_name,value,expiredays)
{
var exdate=new Date();
exdate.setDate(exdate.getDate()+expiredays);
document.cookie=c_name+ "=" +escape(value)+
((expiredays==null) ? "" : ";expires="+exdate.toUTCString());
}
function getCookie(c_name)
{
if (document.cookie.length>0)
  {
  c_start=indof(c_name+"=",document.cookie);
  if (c_start!=-1)
    {
    c_start=c_start + c_name.length+1;
    c_end=indoff(";",document.cookie,c_start);
    if (c_end==-1) c_end=document.cookie.length;
    return unescape(document.cookie.substring(c_start,c_end));
    }
  }
return "";
}

function addGameComment(html, time)
{
	var d = $("<div/>");
	d.html(html);
	d.addClass("gamestat");
	$("#gameres").append(d);
	setTimeout(function(){$(d).remove();},time);
}

function coord(event)
{
//	var top = 0;
//	var left = 0;
//	var ob = document.images['screenshot'];
//	do{
//		left += ob.offsetLeft;
//		top += ob.offsetTop;
//		ob = ob.offsetParent;
//	}while (ob);
//	pos_x = event.offsetX?(event.offsetX):event.pageX-left;
//	pos_y = event.offsetY?(event.offsetY):event.pageY-top;
	var sc = $("#screenshot");
	var pos_x = Math.floor(event.offsetX?(event.offsetX):event.pageX-sc.offset().left);
	var pos_y = Math.floor(event.offsetY?(event.offsetY):event.pageY-sc.offset().top);
	if (document.getElementById('halfsize').checked==true)
	{
		pos_x = pos_x*2;
		pos_y = pos_y*2;
	}
	if (document.getElementById('orient').checked==true)
		return 'h'+pos_x+'_'+pos_y;
	else
		return 'v'+pos_x+'_'+pos_y;
}
function moveLater()
{
	if (Mqueue == false)
	{
		Mqueue = true;
		setTimeout(function(){Mqueue = false; sendNow()},300);
	}
}
function sendNow()
{
	if (moveevent != '' && Mqueue == false)
	{
		Mqueue = true;
		$.ajax({
			url: 'touch',
			dataType: 'text',
			data: moveevent,
			type: 'POST',
			cache: false,
			timeout: 10000,
			success: function(){ Mqueue = false; sendNow(); },
			error: function(){ MQueue = false; sendNow(); }
		});
		moveevent = '';
	}
}
var tosend = [];
var tosendcached = [];
var tosendrev = new Array();
function prepare_widgets()
{
	$.each($(".widget"),function(key,val)
	{
//			$(val).html('<span class="widget-icon ui-icon ui-icon-arrowreturnthick-1-w" style="float:left"></span><div style="overflow:hidden">'+$(val).html()+'</div>');
		if ($(val).children(".widget-icon").length == 0 && $(val).attr('id').substring(0,6) != "close_" && $(val).attr('id').substring(0,5) != "kill_")
		{
			$(val).html('<span class="widget-icon ui-icon ui-icon-arrowreturnthick-1-w" style="float:left"></span><div class="widget-container">'+$(val).html()+'</div>');
//			$(val).prepend('<span class="widget-icon ui-icon ui-icon-arrowreturnthick-1-w" style="float:left"></span>');
//			$(val).children(".widget-icon").click(function(){add_left(val)});
			toggle_widget(val,null);
			var p = $(val).parent();
			$(val).children(".widget-icon").click(function(){toggle_widget(val,p);});
		}
	});
}
/*
function customSl4aCall()
{
	var req = $('#sl4acommand').val();
	var i = req.indexOf("(");
	var method = req;
	var params = [];
	if (i>-1)
	{
		method = req.substring(0,i);
		params = '['+req.substring(i+1,req.length-1)+']';
	}
	$.ajax({
		url: 'sl4a',
		dataType: 'text',
		type: 'POST',
		data: '{id : 1, method: ' + method +', params: ' +params +'}',
		success: function(data) { show_in_dialog(data);	}
	})
}
*/
function show_in_dialog(s)
{
//	$('#res').text(s);
	$('#res').html("");
	$.each(s.split("\n"),function(key,val)
	{
		$('#res').append('<div id=res'+key+'></div>');
		$('#res'+key).html(val);
	});
	$('#res').dialog('open');
}
function load_auto_widget()
{
	$.each($(".auto-widget"),function(key,val)
	{
		var id = $(val).attr('id');
		var spanid = id+"Span";
		if ($(val).children("span").length == 0)
			$(val).append('<span class="strong" id="'+spanid+'"></span>');
		sl4a_prepare(id,[], function(data){
			$('#'+spanid).text(data['result']);
			});
	});
//	sl4a_sendall();
}
function toggle_widget(val,p)
{
	if ($(val).hasClass("widget-right"))
	{
		$(val).appendTo("#leftside");
		$(val).children(".widget-icon").removeClass("ui-icon-arrowreturnthick-1-w").addClass("ui-icon-arrowreturnthick-1-e");
		$(val).removeClass("widget-right").addClass("widget-left");
		leftWidgetList.push($(val).attr('id'));
		setCookie("leftWidgetList",JSON.stringify(leftWidgetList),365);
	}
	else
	{
		$(val).appendTo($(p));
		$(val).children(".widget-icon").removeClass("ui-icon-arrowreturnthick-1-e").addClass("ui-icon-arrowreturnthick-1-w");
		$(val).removeClass("widget-left").addClass("widget-right");
		var t = indof($(val).attr('id'),leftWidgetList);
		if (t != -1)
			leftWidgetList.splice(t,1);
		setCookie("leftWidgetList",JSON.stringify(leftWidgetList),365);
	}
}
function add_widget(obj,str)
{
	//obj.html('<div class="widget">'+str+'<span );
}
var sl4a_id = 0;
function sl4a(method,params,callback)
{
	var request = JSON.stringify({'id': sl4a_id, 'method': method, 'params': params});
	sl4a_id=sl4a_id+1;
	$.ajax({
		url: 'sl4a',
		dataType: 'json',
		data: request,
		type: 'POST',
		success: callback
	});
};
function sl4a_prepare(method,params,callback)
{
	tosend.push([JSON.stringify({'id': sl4a_id, 'method': method, 'params': params}),callback]);
	sl4a_id++;
};
function sl4acached_prepare(method,params,callback)
{
	var s = JSON.stringify({'id': sl4a_id, 'method': method, 'params': params});
	if ($.inArray(s,tosendrev) == -1)
		tosendrev[s] = 0;
	tosendcached.push([tosendrev[s]+s,callback]);
};
function load_fast_calls()
{
	if ($(".right-container").length)
	{
		prepare_widgets();
		sl4acached_prepare('getClipboard',[], function(data){
			$("#clipboard").text(data['result']);
			});
//		sl4a_prepare('getLastKnownLocation',[], function(data){
//			$("#location").html(data['result']['passive'].);
//			});

		//Ringer
		$("#volumeringer").slider({stop: function(event, ui){ 
				sl4a('setRingerVolume',[ui.value]); } });
		sl4acached_prepare('getMaxRingerVolume',[], function(data){
			$("#volumeringer").slider( "option", "max", data['result']); });
		sl4acached_prepare('getRingerVolume',[], function(data){
			$("#volumeringer").slider( "option", "value", data['result']); });

		//Media
		$("#volumemedia").slider({stop: function(event, ui){ 
				sl4a('setMediaVolume',[ui.value]); } });
		sl4acached_prepare('getMaxMediaVolume',[], function(data){
			$("#volumemedia").slider( "option", "max", data['result']); });
		sl4acached_prepare('getMediaVolume',[], function(data){
			$("#volumemedia").slider( "option", "value", data['result']); });
		load_runapplication();
//		sl4acached_sendall();
//	HACK: this is called from the success part of sl4a_sendall(), to avoid too many connections
		sl4a_sendall();
	}
}
function sl4a_sendall()
{
	var request = "";
	var callbacks = [];
	$.each(tosend,function(key,val){ request = request + val[0]+"\n"; callbacks.push(val[1]); });
	$.ajax({
		url: 'sl4as',
		dataType: 'json',
		data: request,
		type: 'POST',
		success: function(data){$.each(data,function(key,val){ if (callbacks[key]) callbacks[key](val)}); sl4acached_sendall();}
	});
}
function sl4acached_sendall()
{
	var request = "";
	var callbacks = [];
	$.each(tosendcached,function(key,val){ request = request + val[0]+"\n"; callbacks.push(val[1]); });
	$.ajax({
		url: 'sl4ascached',
		dataType: 'json',
		data: request,
		type: 'POST',
		success: function(data){$.each(data,function(key,val)
		{
	       	if (callbacks[key]) 
			{
				tosendrev[key] = val["rev"];
				callbacks[key](val);
			}
		});}
	});
}
function sendtoast()
{
	sl4a('makeToast',[$('#toast').val()], function(data){
				$('#toast').val('')
			});
}
function load_runapplication()
{
	var tog = $("#runapplication").children(".toggleable");
	tog.html("loading");
	sl4acached_prepare('getLaunchableApplications',[], function(data){
		var s = '';
		var l = [];
		$.each(data['result'],function(key,val){ l.push(key);});
		l.sort();
		$.each(l,function(key,val)
		{
			var atLeft = $('#run_'+data['result'][val].replace(/\./g,'_'));
			if (atLeft.length)
			{
				atLeft.html('<span onclick="sl4a(\'launch\',[\''+data['result'][val]+'\'])" class="hoverable">`Run` '+val+'</span>');
				atLeft.html('<span class="widget-icon ui-icon ui-icon-arrowreturnthick-1-w" style="float:left"></span><div class="widget-container">'+atLeft.html()+'</div>');
				atLeft.children(".widget-icon").click(function(){toggle_widget(atLeft,tog);});
				atLeft.children(".widget-icon").removeClass("ui-icon-arrowreturnthick-1-w").addClass("ui-icon-arrowreturnthick-1-e");
				atLeft.removeClass("widget-right").addClass("widget-left");
			}
			else
				s += '<div class="widget" id="run_'+data['result'][val].replace(/\./g,"_")+'"><span onclick="sl4a(\'launch\',[\''+data['result'][val]+'\'])" class="hoverable">`Run` '+val+'</span></div>';
		});
		tog.html(s);
		$(tog).children(".widget").children("span").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
		//tog.children("ul").children("li").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
		prepare_widgets();
	});
}
function load_closeapplication()
{
	var tog = $("#closeapplication").children(".toggleable");
	tog.html("loading...");
	sl4a('getRunningPackages',[], function(data){
		var s = '';
		var l = [];
		$.each(data['result'],function(key,val){ l.push(val);});
		l.sort();
		$.each(l,function(key,val)
		{
			s += '<div class="widget" id="close_'+val+'"><span onclick="sl4a(\'forceStopPackage\',[\''+val+'\'])" class="hoverable">`Close` '+val+'</span></div>';
		});
		tog.html(s);
		tog.children(".widget").children("span").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
		prepare_widgets();
	});
}
function load_killapplication()
{
	var tog = $("#killapplication").children(".toggleable");
	tog.html("loading...");
	sl4a('getRunningPackages',[], function(data){
		var s = '';
		var l = [];
		$.each(data['result'],function(key,val){ l.push(val);});
		l.sort();
		$.each(l,function(key,val)
		{
			s += '<div class="widget" id="kill_'+val+'"><span class="hoverable" onclick="$.ajax({url:\'run\', data: \'pkill '+val+'\', type: \'POST\'}); load_killapplication()">`Kill` '+val+'</span></div>';
		});
		tog.html(s);
		tog.children(".widget").children("span").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
		prepare_widgets();
	});
}
function load_wifi()
{
	var tog = $("#wifi").children(".toggleable");
	tog.html("loading...");
	sl4a('wifiGetScanResults',[], function(data){
		var s = '<div id="wifiConnectionInfo"></div>';
		var l = [];
		$.each(data['result'],function(key,val){ l.push(val);});
		l.sort();
		$.each(l,function(key,val)
		{
			s += '<div class="widget-right" id="id_'+val['bssid'].replace(/:/g,'_')+'"><span class="hoverable">'+val['ssid']+' '+val['capabilities']+', `ch`:&nbsp;'+Math.floor((val['frequency']-2412+7)/5)+', `level`:&nbsp;' + val['level'] + ', bssid:&nbsp;' + val['bssid'] + '</span></div>';
		});
		tog.html(s);
		tog.children(".widget-right").children("span").hover(function(){$(this).addClass("ui-state-hover")},function(){$(this).removeClass("ui-state-hover")});
		prepare_widgets();
		sl4a('wifiGetConnectionInfo',[],function(data){
//			$(.wifi
			});
	});
}
var arrownum = 0;

function markRed()
{
	$("#ind").removeClass("ui-icon-check ui-icon-alert ui-icon-transfer-e-w ui-icon-transferthick-e-w");
	$("#ind").addClass("ui-icon-alert");
}
function markGreen()
{
	$("#ind").removeClass("ui-icon-check ui-icon-alert ui-icon-transfer-e-w ui-icon-transferthick-e-w");
	$("#ind").addClass("ui-icon-check");
}
function markYellow()
{
	if ($("#ind").hasClass("ui-icon-transfer-e-w") || $("#ind").hasClass("ui-icon-transferthick-e-w"))
		return;
	$("#ind").removeClass("ui-icon-check ui-icon-alert ui-icon-transfer-e-w ui-icon-transferthick-e-w");
	$("#ind").addClass("ui-icon-transfer-e-w");
	arrownum += 1;
	setTimeout("animateArrow("+arrownum+")",500);
}
function animateArrow(num)
{
	if (arrownum != num)
		return;
	if ($("#ind").hasClass("ui-icon-transfer-e-w"))
		$("#ind").removeClass("ui-icon-transfer-e-w").addClass("ui-icon-transferthick-e-w");
	else
	if ($("#ind").hasClass("ui-icon-transferthick-e-w"))
		$("#ind").removeClass("ui-icon-transferthick-e-w").addClass("ui-icon-transfer-e-w");
	else
		return;
	setTimeout("animateArrow("+arrownum+")",500);
}




var readby = [];
var messagesb = [];
var firstchat = true;
function showchat()
{
		var t = "";
		var i = 0;
		for (i=0; i< messagesb.length; i++)
		{
			t += messagesb[i];
			var first = true;
			for (var j = 0; j < readby.length; j++)
			{
				if (readby[j][1]-1 == i)
				{
					if (first)
						t += "<div style=\"background-color:#888888; color:white; font-size:80%; text-align: right\">`Above lines are read by`: ";
//60C01A
					else
						t += ", ";
					t += readby[j][0];
					first = false;
				}
			}
			if (first == false)
				t += "</div>";
		}
 var popUp = document.getElementById("chatpopup1");
 popUp.style.width = "auto";
 popUp.style.height ="auto";
 popUp.innerHTML = "<div id=\"statusbar\" >"+
	 "<div style=\"float:left; background: #FFC470; width:100%; padding: 2px\">" +
	 "<div style=\"float:left; background: #FFC470; width:80%; \" onclick=\"hidechat()\">`Chat`</div>" +
	 "<div style=\"float:left; background: #FFC470; width:20%; text-align: right; \"><a style=\"a:hover {color: white}\" onclick=\"clearchat()\">`clear`&nbsp;</a></div></div>" +
	"<div id=\"chatmessages\" style=\"clear:both; padding: 3px; overflow:auto; max-height:200px; font-size: 80%\">"+t.replace(/\n/g,'<br/>')+"</div>";
 document.getElementById('chatmessages').scrollTop = document.getElementById('chatmessages').scrollHeight;
 document.getElementById('chatpopup2').style.display = "inline";
 document.getElementById('chatinput').focus();
};
function hidechat()
{
 var popUp = document.getElementById("chatpopup1");
 document.getElementById('chatpopup2').style.display = "none";
 popUp.style.width = "auto";//"100px";
 popUp.style.height ="20px";
 var s = "`Chat`";
 if (messagesb.length == 1)
	 s = messagesb.length + " `chat message`";
 if (messagesb.length > 1)
	 s = messagesb.length + " `chat messages`";
 popUp.innerHTML = "<div id=\"statusbar\" style=\"width:100%; background: #FFC470; padding: 2px\" onclick=\"showchat()\">"+s+"</div>";
};
var chatid = 0;
var chatcount = -1;
var messagesb = [];
	function chatmakeRequest(url) {
		if (window.XMLHttpRequest) { // Mozilla, Safari,...
		chathttp_request = new XMLHttpRequest();
			if (chathttp_request.overrideMimeType) {
		    chathttp_request.overrideMimeType('text/xml');
			}
	}else if (window.ActiveXObject) { // IE
			try {
		chathttp_request = new ActiveXObject("Msxml2.XMLHTTP");
		}catch (e) {
		try {
		chathttp_request = new ActiveXObject("Microsoft.XMLHTTP");
		} catch (e) {}
		}
		}

		if (!chathttp_request) {
		 alert('Cannot create XMLHTTP instance');
		 return false;
		}
		chathttp_request.onreadystatechange = chatalertContents;
		chathttp_request.open('GET', url, true);
		chathttp_request.send(null);
	}
	function clearmakeRequest(url) {
		if (window.XMLHttpRequest) { // Mozilla, Safari,...
		clearhttp_request = new XMLHttpRequest();
			if (clearhttp_request.overrideMimeType) {
		    clearhttp_request.overrideMimeType('text/xml');
			}
	}else if (window.ActiveXObject) { // IE
			try {
		clearhttp_request = new ActiveXObject("Msxml2.XMLHTTP");
		}catch (e) {
		try {
		clearhttp_request = new ActiveXObject("Microsoft.XMLHTTP");
		} catch (e) {}
		}
		}

		if (!clearhttp_request) {
		 alert('Cannot create XMLHTTP instance');
		 return false;
		}
		clearhttp_request.onreadystatechange = clearalertContents;
		clearhttp_request.open('GET', url, true);
		clearhttp_request.send(null);
	}
	function sendmakeRequest(url,params) {
		if (window.XMLHttpRequest) { // Mozilla, Safari,...
		sendhttp_request = new XMLHttpRequest();
			if (sendhttp_request.overrideMimeType) {
		    sendhttp_request.overrideMimeType('text/xml');
			}
	}else if (window.ActiveXObject) { // IE
			try {
		sendhttp_request = new ActiveXObject("Msxml2.XMLHTTP");
		}catch (e) {
		try {
		sendhttp_request = new ActiveXObject("Microsoft.XMLHTTP");
		} catch (e) {}
		}
		}

		if (!sendhttp_request) {
		 alert('Cannot create XMLHTTP instance');
		 return false;
		}
		sendhttp_request.onreadystatechange = alertContentsSend;
		sendhttp_request.open('POST', url, true);
		sendhttp_request.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
		sendhttp_request.setRequestHeader("Content-length", params.length);
		sendhttp_request.setRequestHeader("Connection", "close");
		sendhttp_request.send(params);
	}
		function chatalertContents() 
		{
		   if (chathttp_request.readyState == 4 && chathttp_request.status == 200) 
		   {
			   show(chathttp_request.responseXML);
		   }
		   else
		   if (chathttp_request.readyState == 4)
		   {
			chatid = 0;
			chatcount = -1;
			setTimeout("chatmakeRequest('getchatmessage_0','')",5000);
			firstchat = true;
		   }
	      }
		function clearalertContents() 
		{
	      }
		function alertContentsSend() 
		{
	      }

	function sendchat()
	{
		var t = document.getElementById('chatinput').value;
		document.getElementById('chatinput').value = "";
		if (t.charCodeAt(t.length-1) == 13 || t.charCodeAt(t.length-1) == 10)
		{
			t = t.substring(0,t.length-1);
		}
		if (t.length)
			sendmakeRequest("writechatmessage",t);
	}
	function clearchat()
	{
		clearmakeRequest("clearchatmessage");
	}
	function chatloadxml()
	{
		if (chatcount == -1)
			chatmakeRequest("getchatmessage_"+chatid+"_"+messagesb.length);
		else
			chatmakeRequest("getchatmessage_"+chatid+"_"+messagesb.length+"_"+chatcount);
	}
	function show(xml)
	{
		var nid = xml.documentElement.getElementsByTagName("id");
		var tid = -1;
		if (nid && nid[0] && nid[0].firstChild)
			tid = nid[0].firstChild.nodeValue;
		var changed = false;
		if (tid != chatid)
		{
			var i = 0;
			if (messagesb.length && chatid != 1)
				changed = true;
			messagesb = [];
		}
		var ncount = xml.documentElement.getElementsByTagName("readbypos");
		if (ncount && ncount[0] && ncount[0].firstChild)
			chatcount = ncount[0].firstChild.nodeValue;
		else
			chatcount = -1;
		chatid = tid;
		var mes=xml.documentElement.getElementsByTagName("message");
		for (var i = 0; i < mes.length; i++)
		{
			var nodes= mes[i].childNodes;
			var user = "";
			var time = 0;
			var data = "";
			for (var j = 0; j < nodes.length; j++)
			{
				try{
					if (nodes[j].nodeName == "user" && nodes[j].firstChild)
						user = nodes[j].firstChild.nodeValue;
					else if (nodes[j].nodeName == "time" && nodes[j].firstChild)
						time = nodes[j].firstChild.nodeValue;
					else if (nodes[j].nodeName == "data" && nodes[j].firstChild)
						data = nodes[j].firstChild.nodeValue;
				} catch(exception){};
			}
			var myDate = new Date(parseInt(time)*1000);
			var nowDate = new Date();
			if (nowDate.getDate() == myDate.getDate() && nowDate.getMonth() == myDate.getMonth() && nowDate.getFullYear() == myDate.getFullYear())
			{
				var h = myDate.getHours();
				if (h < 10)
					h = "0"+h;
				var m = myDate.getMinutes();
				if (m < 10)
					m = "0"+m;
				var s = myDate.getSeconds();
				if (s < 10)
					s = "0"+s;
				messagesb.push("<div class=\"smsLine\"><span class=\"smsDate\" style=\"font-size: 65%\" >["+h + ":" + m + ":" +s+"] </span><strong>"+user+":</strong> "+data+"</div>");
			}
			else
			{
				messagesb.push("<div class=\"smsLine\"><span class=\"smsDate\" style=\"font-size: 65%\" >["+myDate.toLocaleString()+"]</span><br/><strong>"+user+":</strong> "+data+"</div>");
			}
		}
		var r=xml.documentElement.getElementsByTagName("readby");
		var oldreadby = readby;
		readby = [];
		var thisuser = 0;
		for (var i = 0; i < r.length; i++)
		{
			var user = "";
			var pos = 0;
				//try{
					if (r[i].firstChild)
					{
						user = r[i].getAttribute("name");
						pos = r[i].firstChild.nodeValue;
					}
				//} catch(exception){};
			if (user == "<<USERNAME>>")
				thisuser = pos;
			else
				readby.push([user,pos]);
		}
		var d = false;
		if (oldreadby.length != readby.length)
			d = true;
		else
		{
			for (i = 0; i < oldreadby.length; i++)
			{
				if (oldreadby[i][0] != readby[i][0] ||oldreadby[i][1] != readby[i][1]  )
				{
					d = true;
					break;
				}
			}
		}
		if (firstchat)
		{
			if (thisuser == messagesb.length)
				hidechat();
			else
				showchat();
		}
		else
		if (mes.length || d || changed)
		{
			showchat();
		}
		firstchat = false;
		chatloadxml();

	}
function isEnter(e)
{
	var evtobj=window.event? window.event : e //distinguish between IE's explicit event object (window.event) and Firefox's implicit.
	if (evtobj.keyCode && evtobj.keyCode == 13 && !evtobj.shiftKey)
	{
		sendchat();
		return true;
	}
}
function indof(x,arr)
{
	if (arr.indexOf)
		return arr.indexOf(x);
	for (var i = 0; i<arr.length; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}
function indoff(x,arr,start)
{
	if (arr.indexOf)
		return arr.indexOf(x,start);
	for (var i = start; i<arr.length; i++)
	{
		if (arr[i] == x)
			return i;
	}
	return -1;
}

