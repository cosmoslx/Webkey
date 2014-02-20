Directory structure:

java
	GUI in Android
	
	create and edit java/local.properties, save the SDK's and the certification keys' directory:
		sdk.dir=/home/petya/download/android-sdk-linux_x86
		sdk.key=/home/petya/work/Webkey
	run either "ant release" or "ant debug" in java/ to compile

java/assets/webkey
	root directory of the service, all the html/js/css files go here

service
	all source to compile the binary webkey, which goes to java/assets/bin/
	set the NDK directory, in my case:
		export ANDROID_NDK=/home/petya/download/android-ndk-r8b
	run "make" in service/ to compile

sl4a
	create and edit sl4a/ScriptForAndroidTemplate/local.properties, save the SDK's and the certification keys' directory:
		sdk.dir=/home/petya/download/android-sdk-linux_x86
		sdk.key=/home/petya/work/Webkey
	all source to compile Scripting Layer For Android, which goes to java/libs/script.jar
	run "ant main" in sl4a/ScriptForAndroidTemplate/
