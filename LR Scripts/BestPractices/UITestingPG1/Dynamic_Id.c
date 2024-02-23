Dynamic_Id()
{
	/* Dynamic ID */
	web_url("dynamicid", 
		"URL=http://uitestingplayground.com/dynamicid", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://uitestingplayground.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	return 0;
}
