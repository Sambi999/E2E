Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("thinking-tester-contact-list.herokuapp.com", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/branch-heads/6167@{#1818}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*\\xD9\\x02\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\\x12\\x08\\xDE\\xD8\\x12\\x12\\x0C \\x00x\\x00\\x80\\x01\\x9A\\x8E\\xE2\\xAE\\xDC12\\x8F\\x01\\x08\\x9A\\xB7\t\\x12\\x88\\x01 \\x00\\x92\\x01\\x82\\x01\n4\n\\x0Echrome_sync_di\\x12\\x0551!di\\x1A\\x12\t\\xBF?\\x1Fy\\xC8\\x11\\x06\\x00\\x11\\xBF?\\x1Fy\\xC8\\x11\\x06\\x00)\\x19'!y\\xC8\\x11\\x06\\x00\nJ\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t"
		"\\x80\\x874k\\xC8\\x11\\x06\\x00\\x11\\x80\\x874k\\xC8\\x11\\x06\\x00)\\xB6=\\x1Fy\\xC8\\x11\\x06\\x000\\x80\\x8F\\xD2\\xD9\\x86\\xB9\\x84\\x038\\x80\\xA3\\xC3G2\\x8F\\x01\\x08\\xFC\\xDE$\\x12\\x88\\x01 \\x00\\x92\\x01\\x82\\x01\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\t\\xBF?\\x1Fy\\xC8\\x11\\x06\\x00\\x11\\xBF?\\x1Fy\\xC8\\x11\\x06\\x00),'!y\\xC8\\x11\\x06\\x00\nJ\n\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80\\x874k\\xC8\\x11\\x06\\x00\\x11\\x80\\x874k\\xC8\\x11\\x06\\x00)"
		"\\xB6=\\x1Fy\\xC8\\x11\\x06\\x000\\x80\\x8F\\xD2\\xD9\\x86\\xB9\\x84\\x038\\x80\\xA3\\xC3G2\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x04:%z00000157-2da7-5740-0000-000057da890cR\\x16\n\\x0E\\x12\\x0C8\\x00@\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.185 (057a8ae7deb3374d0f1b04b36304d236f0136188-refs/branch-heads/6167@{#1818}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	/* Login */

	lr_think_time(35);

	web_custom_request("login", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/users/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"email\":\"WWWXXX123@gmail.com\",\"password\":\"WWWXXX111\"}", 
		LAST);

	web_url("contactList", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("contacts", 
		"URL=https://thinking-tester-contact-list.herokuapp.com/contacts", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://thinking-tester-contact-list.herokuapp.com/contactList", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:s9LBOO5RiQI-wPjUkAJXaQxTIxD0eD5AJhtP_h0JR0s&cup2hreq=dcdbf4c7b328170722ef32b2cdb029732ab8262d56799dbae9ec1bc190408d80", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{c28bb01f-5cc8-40ba-9ebe-eed7a33d9048}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{680d8c0e-885d-47a9-b2b8-71793df8e310}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{66d67f41-abf1-49fc-90fe-6745c47b6b42}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\"{e4cc05e5-ee21-4471-ac03-dd31e89baa84}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\""
		"ping\":{\"ping_freshness\":\"{9fe34e7f-2abc-4366-9bad-da4a908d0fb5}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:28qr@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.04dfbee1ec2fd167512805dedf3fa2a823dc28fe9fa2c97a74e664b38486110f\"}]},\"ping\":{\"ping_freshness\":\"{211cec1f-939a-4fed-857c-cc08a86d0519}\",\"rd\":6258},\""
		"updatecheck\":{},\"version\":\"434\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fa8f95866e02e4f5b8f7c6b0aeb6a7230517c7f23f4d1374c337a731193a9bde\"}]},\"ping\":{\"ping_freshness\":\"{29bcd255-e3d9-433b-b677-e91c76d3129e}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.19.0\"},{\"appid\":\""
		"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{8924de7b-1a55-48bf-bd74-86949fc174f7}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1:j5l:\",\"cohortname\""
		":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{ae7509d6-fa98-4c22-b7ab-27fd7a711bb7}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp"
		"\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{ad5ad1a0-4cfd-4465-85d2-98d55ec48d42}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.43242be9456dcad18ec3f6597c842a521246ccc3cc377919779b356dfb5b5e20\"}]},\"ping"
		"\":{\"ping_freshness\":\"{55ab761c-3189-494b-9110-007400f630c9}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"8558\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":{\"ping_freshness\":\"{26f3ac5f-a202-4a75-9052-d2fdf1c66e36}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.0.15\"},"
		"{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{79f82a53-4fcd-4b5d-a09c-25b42d8192b5}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\""
		"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{7a4e1fb6-48fb-4e60-a515-f6133045ef07}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.4ccf4cac4c37dd966d3bee0b3a4137894eecde1b22a9d4e7ef07d5081b5cf67a\"}]},\"ping\":{\"ping_freshness\":\"{2dfffdf4-b5e4-4966-a2e6-5f78b9bfbcab}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"867\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.af8fa6822a4a3a4aeaf78dd2b562b3b76ed3ef0b362f8ebc822df79717c996df\"}]},\"ping\":{\""
		"ping_freshness\":\"{80f00d58-47d0-4b7d-884e-374eef72e5b3}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3019\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{2b5d1cb9-1646-42a7-a315-e2bf4c1a7765}\",\"rd\":6258},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{7d3f08dd-76c4-4127-a1c8-edac0dbf57d8}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{229ca3f5-cc43-44db-b0cf-503aa8bb6d5a}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.d32c86b9cc1bfeb1660731da145c5b23085f91eaad4a1a810e9da6773189bb93\"}]},\"ping\":{\"ping_freshness\":\"{e879f600-3958-470e-9981-12698f627583}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.18.2\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package"
		"\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a7675b21-b92e-45e5-b346-abb87b58d7c5}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.7e7996864a74a4b8db2b59c559f924f321668848edbcb85386212a4901ef0e6e\"}]}"
		",\"ping\":{\"ping_freshness\":\"{617e2011-81cc-47a0-b86d-d9d69a5196c4}\",\"rd\":6258},\"updatecheck\":{},\"version\":\"2024.2.14.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.185\",\"protocol\":\"3.1"
		"\",\"requestid\":\"{7e6c7214-367b-4d49-864a-571afaab6484}\",\"sessionid\":\"{a05e6ad2-8630-4e4c-81ca-25fbea13c60c}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.185\"}}", 
		LAST);

	return 0;
}