//      $(document).ready(function () {
//
//      }); // document.ready

var xres = <<XRES>>;
var yres = <<YRES>>;
var images = [];
var numOfImages = 3;
var counter;
var lasttime = 0;
 $(document).ready(function () {
	 counter = 0;
	 for (var i = 0; i < numOfImages; i++)
	 {
		 images[i] = $('<img />');
	 }
});

function startnextimage(i,waitfordiff)
{
	if (document.getElementById('auto').checked==true || waitfordiff == false)
	{
		var now = new Date();
		var t = document.getElementById('png').checked?'png':'jpg';
		var or = document.getElementById('orient').checked?'h':'v';
		var lowr = document.getElementById('lowres').checked?'l':'n';
		var f = document.getElementById('first').checked?'f':'n';
		var fli = document.getElementById('flip').checked?'f':'n';
		var w = waitfordiff?'w':'n';
		var asfile = 'n';
		var addr = 'screenshot.'+t+'?'+or+lowr+f+fli+w+asfile+now.getTime()+i;
		$(images[i])
			.unbind()
			.load(function(){
//				console.log(addr+" load");
				var ctime = getCookie("time");
				if (ctime >= lasttime)
				{
					$('#screenshot').attr('src', addr);//$(this).attr('src'));
					lasttime = ctime;
				}
//				console.log($('#screenshot').height());
				var now = new Date();
//				        if (counter%100 == 0)
//				                $("#tabs").append("<div>"+now.getTime()+"</div>")
				        counter++;
				setTimeout("startnextimage("+i+",true)",100);
			})
			.error(function(){
//				console.log("error");
				setTimeout("startnextimage("+i+",false)",1000);
			})
			.attr('src',addr);
	}
}

function saveImage(waitfordiff)
{
	var now = new Date();
	var t = document.getElementById('png').checked?'png':'jpg';
	var or = document.getElementById('orient').checked?'h':'v';
	var lowr = document.getElementById('lowres').checked?'l':'n';
	var f = document.getElementById('first').checked?'f':'n';
	var fli = document.getElementById('flip').checked?'f':'n';
	var w = waitfordiff?'w':'n';
	var asfile = 'f';
	window.location = 'screenshot.'+t+'?'+or+lowr+f+fli+w+asfile+now.getTime();
	refreshImage(false);
}
function refreshImage(waitfordiff)
{
	var now = new Date();
	var t = document.getElementById('png').checked?'png':'jpg';
	var or = document.getElementById('orient').checked?'h':'v';
	var lowr = document.getElementById('lowres').checked?'l':'n';
	var f = document.getElementById('first').checked?'f':'n';
	var fli = document.getElementById('flip').checked?'f':'n';
	var w = waitfordiff?'w':'n';
	var asfile = 'n';
//	document.images['screenshot'] = new Image();
	if (document.getElementById('auto').checked==true)
	{
//		document.images['screenshot'].onload = function() {startnextimage()};
//		document.images['screenshot'].onerror = function() {startnextimage()};
//		document.images['screenshot'].onabort = function() {startnextimage()};
	}
	
//	document.images['screenshot'].src = 'screenshot.'+t+'?'+or+lowr+f+fli+w+asfile+now.getTime();
	var addr = 'screenshot.'+t+'?'+or+lowr+f+fli+w+asfile+now.getTime();
	for (var i = 0; i < numOfImages; i++)
	{
		startnextimage(i,waitfordiff ? true : i!=0);
	}
	setWidth(document.getElementById('orient').checked?1:0,document.getElementById('halfsize').checked?1:0);
}
function setWidth(orient,hs)
{ 
	var s=0; 
	if (hs == 0) 
	{ 
		if (orient == 1 ) 
			s=yres; 
		else 
			s=xres;
	} 
	else 
	{
		if (orient == 1 ) 
			s=yres/2; 
		else 
			s=xres/2;
	}; 
	document.images.screenshot.width=s; 
	document.getElementById('imgholder').style.width=s+'px'
}; 
