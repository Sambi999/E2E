/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_reg_find("Text=UI Test Automation Playground", 
		LAST);

	web_url("uitestingplayground.com", 
		"URL=http://uitestingplayground.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_image_check("cube_image_check","Src=/static/cube.png",LAST);
	

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fork.png", 
		"URL=http://uitestingplayground.com/static/fork.png", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://uitestingplayground.com/static/style.css", 
		"Snapshot=t10.inf", 
		LAST);


	
	return 0;
}
