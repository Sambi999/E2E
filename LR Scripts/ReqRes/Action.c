Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(96);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("reqres.in", 
		"URL=https://reqres.in/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:G-2eSays08rQ4WLBrt1FnH6jSVjqTxCrmsR_dxz94iE&cup2hreq=5ebb95844475762b82fff2496a6201490f09cb331c2e776d22c71c3b1c6633db", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{5341785f-3e33-478e-b1a3-097beda96f35}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.3.36.141\"},{\"appid\":\""
		"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{e8bb138d-0900-429a-b8c5-51b9077df1f7}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohortname"
		"\":\"Chrome 106+\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{f98d5c32-8230-4fc0-a3ae-875fb36c1781}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\""
		"ping_freshness\":\"{8efcac45-d8d2-4655-ac16-bb516883ce4c}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ENGB500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f/20ol:20or@0.5\",\"cohortname\":\"Rollout\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8069f8805123f74944304604381770bb694317c9e1044e096f540222dc56c0f6\"}]},\"ping\":{\"ping_freshness\":\""
		"{b34396ef-3092-4d12-8977-143239863cd2}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"20230923.567854667.14\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:27p3@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.cadbf9a5f27721576d77d35576f37ca01ac34d86bce73958bf71cde62af71b48\"}]},\"ping\":{\"ping_freshness\":\"{99e4a3d4-96d9-4363-babb-82e0a95b73bf}\",\"rd\":6245},\"updatecheck\":"
		"{},\"version\":\"432\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.4a6508925b2ffec931c1e3931ddeb15ca41d820a8264cd5a962b526e9932bcdf\"}]},\"ping\":{\"ping_freshness\":\"{0fa1664a-a295-410b-82e9-0c1147e1ba2f}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.2.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\","
		"\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{e59ef37a-8d44-455a-ae8c-6e6a8db0671c}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{95df3547-cb85-40a8-9a19-c4aa6b8c3494}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3a118962ef814c91f6476bb9f0de58afa63103af6ac1b8729be9b39a86789e96\"}]},\"ping\":"
		"{\"ping_freshness\":\"{38700613-1aea-48a6-a19f-a46eec4bd159}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.0.15\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.90f54a8ca8c3135f647fedbb5f38ecadbbae4d45dafc3b73cde0c96d924a1773\"}]},\"ping\":{\"ping_freshness\":\"{fab40322-b1da-421c-889c-c2b9e354ab3a}\",\"rd\":6245},\"updatecheck\":{"
		"},\"version\":\"8531\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"ping\":{\"ping_freshness\":\"{895511cf-ca04-42f6-8ddc-ba2825f54aa1}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohortname\":\"stable64\",\"enabled\":true,\"installdate\":5887,\"lang\":\""
		"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{03c084a5-cacc-42c8-8da8-47f8088d2392}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.e4bdca96fb46d22bc12f5bc5bdb5cdb518555fd1762653f8afc96d06b34ec74b\"}]},\"ping\":{\"ping_freshness\":\"{64421a94-0452-48f8-a38f-834ce05acf90}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"852\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.887c873b6c3a26844482754c8534268fcd848b8c543b652626b4d4ec367f26fd\"}]},\"ping\":{\""
		"ping_freshness\":\"{70cac0bb-fd71-4e72-aec9-d1394c31cad0}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3017\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\"{2ffaa6b9-117d-44c1-a8b1-f5ce563d5bbd}\",\"rd\":6245},"
		"\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{adb6e29c-1e3a-48c6-b6c8-0683a6e34900}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\""
		"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{13814018-6bee-4c6d-963b-9a987797d596}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\"cohort\":\"1:26yf:\",\"cohortname\":\""
		"Stable\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.74316953175dd4fc990c661551ce1387c462d705f9eff88d759fb130885a3530\"}]},\"ping\":{\"ping_freshness\":\"{e1ec4b71-a67d-41fe-8af7-bca71c005b95}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.4.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\""
		":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{772b5f21-c171-444a-bde4-77bcbda1415a}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5887,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.48fecfa3c6f59eb6c34fdd5e8f19e0678699e2f27dc8ebfa7025c246d4575c68\"}]},"
		"\"ping\":{\"ping_freshness\":\"{8a084267-bf68-4b89-befa-151070cfba08}\",\"rd\":6245},\"updatecheck\":{},\"version\":\"2024.1.17.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6153,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.31fc707db886cd7b31724279d1ce873be7f1ef84f9c8b0cb0664743d47e41217\"}]},\"ping\":{\"ping_freshness\":\"{5b092dae-881d-4589-ad73-da9b54d229fd}\",\""
		"rd\":6245},\"updatecheck\":{},\"version\":\"2024.2.5.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"121.0.6167.140\",\"protocol\":\"3.1\",\"requestid\":\"{0447b16c-5d4f-4f73-b8d9-4eb778c09f61}\",\"sessionid\":\""
		"{7a48791b-2f8c-4ca4-8c23-ab017f4748ad}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.372\"},\"updaterversion\":\"121.0.6167.140\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x12\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)"
		"b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_concurrent_start(NULL);

	web_url("monetization.custom.js", 
		"URL=https://m.servedby-buysellads.com/monetization.custom.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("font-awesome.min.css", 
		"URL=https://maxcdn.bootstrapcdn.com/font-awesome/4.2.0/css/font-awesome.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t7.inf", 
		LAST);

	web_url("logo.png", 
		"URL=https://reqres.in/img/logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://reqres.in/", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("app.css", 
		"URL=https://reqres.in/css/app.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://reqres.in/", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("DigiCertSHA2ExtendedValidationServerCA.crt", 
		"URL=http://cacerts.digicert.com/DigiCertSHA2ExtendedValidationServerCA.crt", 
		"Resource=1", 
		"RecContentType=application/pkix-cert", 
		"Referer=", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("swagger-logo-horizontal.jpeg", 
		"URL=https://reqres.in/img/swagger-logo-horizontal.jpeg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://reqres.in/", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("v3", 
		"URL=https://js.stripe.com/v3/", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("email-decode.min.js", 
		"URL=https://reqres.in/cdn-cgi/scripts/5c5dd728/cloudflare-static/email-decode.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("fastclick.min.js", 
		"URL=https://cdnjs.cloudflare.com/ajax/libs/fastclick/1.0.3/fastclick.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("app.js", 
		"URL=https://reqres.in/js/app.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-KB622KF", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("js", 
		"URL=https://www.googletagmanager.com/gtag/js?id=UA-174008107-1", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t17.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_url("polished-butterfly-j17lt", 
		"URL=https://codesandbox.io/embed/polished-butterfly-j17lt?autoresize=1&fontsize=14&theme=dark&view=preview", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://reqres.in/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("css", 
		"URL=https://fonts.googleapis.com/css?family=Roboto:300,400,500,700|Source%20Code%20Pro:500", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"URL=https://static.cloudflareinsights.com/beacon.min.js/v84a3a4012de94ce1a686ba8c167c359c1696973893317", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("npm.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/npm.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("typescript.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/typescript.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("21.png", 
		"URL=https://screenshots.codesandbox.io/j17lt/21.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("css.svg", 
		"URL=https://cdn.jsdelivr.net/gh/PKief/vscode-material-icon-theme@master/icons/css.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("868803", 
		"URL=https://avatars.githubusercontent.com/u/868803?v=4", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_url("HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"URL=https://fonts.gstatic.com/s/sourcecodepro/v23/HI_diYsKILxRpg3hIP6sJ7fM7PqPMcMnZFqUwX28DP6QtMlrTA.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"URL=https://fonts.gstatic.com/s/roboto/v30/KFOmCnqEu92Fr1Mu4mxK.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://fonts.googleapis.com/", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASJwkRnmFQ0MKKWRIFDZFhlU4SBQ2RYZVOEgUNlJCS-iFR-NIDgSdHXQ==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASJwkRnmFQ0MKKWRIFDZFhlU4SBQ2RYZVOEgUNlJCS-iFR-NIDgSdHXQ==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASNQl_POqPQtW6chIFDQbtu_8SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2UkJL6Ib559mcIUYDr", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASNQl_POqPQtW6chIFDQbtu_8SBQ2RYZVOEgUNkWGVThIFDZFhlU4SBQ2UkJL6Ib559mcIUYDr?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t31.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(5);

	web_url("m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"URL=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://reqres.in/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("prettierrc.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/prettierrc.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("jsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/jsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("tsconfig.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/tsconfig.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"URL=https://js.stripe.com/v3/fingerprinted/js/m-outer-15a2b40a058ddff1cffdb63779fe3de1.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://js.stripe.com/v3/m-outer-3437aaddcdf6922d623e172c2d6f9278.html", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("package.json", 
		"URL=https://raw.githubusercontent.com/SchemaStore/schemastore/master/src/schemas/json/package.json", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t37.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_url("inner.html", 
		"URL=https://m.stripe.network/inner.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://js.stripe.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("out-4.5.43.js", 
		"URL=https://m.stripe.network/out-4.5.43.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://m.stripe.network/inner.html", 
		"Snapshot=t39.inf", 
		LAST);

	lr_think_time(5);

	web_custom_request("6", 
		"URL=https://m.stripe.com/6", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://m.stripe.network/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body="
		"JTdCJTIydjIlMjIlM0ExJTJDJTIyaWQlMjIlM0ElMjJiMDFlNDcyZTMwNWMxZGU5YTliYjFhZjg0MDg5ZGQ4ZCUyMiUyQyUyMnQlMjIlM0EyNzIuNiUyQyUyMnRhZyUyMiUzQSUyMjQuNS40MyUyMiUyQyUyMnNyYyUyMiUzQSUyMmpzJTIyJTJDJTIyYSUyMiUzQSU3QiUyMmElMjIlM0ElN0IlMjJ2JTIyJTNBJTIyZmFsc2UlMjIlMkMlMjJ0JTIyJTNBMC4zJTdEJTJDJTIyYiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJjJTIyJTNBJTdCJTIydiUyMiUzQSUyMmVuLUdCJTIyJTJDJTIydCUyMiUzQTAuMiU3RCUyQyUyMmQlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyV2luMzIlMjIlMkMlMjJ0JTIyJTNBMCU3RCUyQyUyMm"
		"UlMjIlM0ElN0IlMjJ2JTIyJTNBJTIyUERGJTIwVmlld2VyJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJGcGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyQyUyMENocm9tZSUyMFBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBDaHJvbWl1bSUyMFBERiUyMFZpZXdlciUyQ2ludGVybmFsLXBkZi12aWV3ZXIlMkNhcHBsaWNhdGlvbiUyRnBkZiUyQ3BkZiUyQiUyQnRleHQlMkZwZGYlMkNwZGYlMkMlMjBNaWNyb3NvZnQlMjBFZGdlJTIwUERGJTIwVmlld2VyJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJG"
		"cGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyQyUyMFdlYktpdCUyMGJ1aWx0LWluJTIwUERGJTJDaW50ZXJuYWwtcGRmLXZpZXdlciUyQ2FwcGxpY2F0aW9uJTJGcGRmJTJDcGRmJTJCJTJCdGV4dCUyRnBkZiUyQ3BkZiUyMiUyQyUyMnQlMjIlM0ExJTdEJTJDJTIyZiUyMiUzQSU3QiUyMnYlMjIlM0ElMjIxMjgwd182ODBoXzI0ZF8xciUyMiUyQyUyMnQlMjIlM0EwLjElN0QlMkMlMjJnJTIyJTNBJTdCJTIydiUyMiUzQSUyMjUuNSUyMiUyQyUyMnQlMjIlM0EwLjIlN0QlMkMlMjJoJTIyJTNBJTdCJTIydiUyMiUzQSUyMmZhbHNlJTIyJTJDJTIydCUyMiUzQTAuMSU3RCUyQyUyMmklMjIlM0ElN0IlMjJ2JTIyJTNBJTIyc2Vzc2lvblN0b3JhZ2UtZW5hYm"
		"xlZCUyQyUyMGxvY2FsU3RvcmFnZS1lbmFibGVkJTIyJTJDJTIydCUyMiUzQTEuNCU3RCUyQyUyMmolMjIlM0ElN0IlMjJ2JTIyJTNBJTIyMDEwMDEwMDEwMDAxMTAwMDEwMTAwMDEwMTEwMDAxMDEwMTAxMDAxMDAxMDExMTExMDExMTExMSUyMiUyQyUyMnQlMjIlM0EyNjguNiUyQyUyMmF0JTIyJTNBMjAyLjUlN0QlMkMlMjJrJTIyJTNBJTdCJTIydiUyMiUzQSUyMiUyMiUyQyUyMnQlMjIlM0EwJTdEJTJDJTIybCUyMiUzQSU3QiUyMnYlMjIlM0ElMjJNb3ppbGxhJTJGNS4wJTIwKFdpbmRvd3MlMjBOVCUyMDEwLjAlM0IlMjBXaW42NCUzQiUyMHg2NCklMjBBcHBsZVdlYktpdCUyRjUzNy4zNiUyMChLSFRNTCUyQyUyMGxpa2UlMjBHZWNrbyklMjBDaHJvbWUlMkYx"
		"MjEuMC4wLjAlMjBTYWZhcmklMkY1MzcuMzYlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIybSUyMiUzQSU3QiUyMnYlMjIlM0ElMjIlMjIlMkMlMjJ0JTIyJTNBMC4xJTdEJTJDJTIybiUyMiUzQSU3QiUyMnYlMjIlM0ElMjJmYWxzZSUyMiUyQyUyMnQlMjIlM0ExMDQuMyUyQyUyMmF0JTIyJTNBMC43JTdEJTJDJTIybyUyMiUzQSU3QiUyMnYlMjIlM0ElMjJhY2I3ZDVmMDlkZjU0ZTMzMzFjZDI0NzU3ZTEzMTVjNCUyMiUyQyUyMnQlMjIlM0E0NS43JTdEJTdEJTJDJTIyYiUyMiUzQSU3QiUyMmElMjIlM0ElMjIlMjIlMkMlMjJiJTIyJTNBJTIyaHR0cHMlM0ElMkYlMkZzS1JBS1pSUDh4NDFMbDA0RU9fR1RfUE5FSkR3Wmt6Rnd6YmExbGZ6LVlzLmpaWHBzczhORm"
		"8zQU5IZ0ZMQTRlN2dqMVJ4Y3NkSGd1c2d2RjQzSmZaWDglMkYlMjIlMkMlMjJjJTIyJTNBJTIyJTIyJTJDJTIyZCUyMiUzQSUyMk5BJTIyJTJDJTIyZSUyMiUzQSUyMk5BJTIyJTJDJTIyZiUyMiUzQWZhbHNlJTJDJTIyZyUyMiUzQXRydWUlMkMlMjJoJTIyJTNBdHJ1ZSUyQyUyMmklMjIlM0ElNUIlMjJsb2NhdGlvbiUyMiU1RCUyQyUyMmolMjIlM0ElNUIlNUQlMkMlMjJuJTIyJTNBMTE4OS40MDAwMDAwMDU5NjA1JTJDJTIydSUyMiUzQSUyMnJlcXJlcy5pbiUyMiUyQyUyMnclMjIlM0ElMjIxNzA3MjEzMzk5MDE3JTNBMzAyZDA4ZmUwZjZhNjM4ZGFlODliYjBlMjcwY2NmOGViZTYzN2EwYTYyNjVlNTBkZGU3N2Y4ZGI4YTZjNzgyMiUyMiU3RCUyQyUyMmglMjIl"
		"M0ElMjI0ODUzYjI5ZTNmYzk0MTQ3MGUwMSUyMiU3RA==", 
		LAST);

	web_custom_request("httpapi", 
		"URL=https://stats.codesandbox.io/2/httpapi", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://codesandbox.io/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(15);

	web_custom_request("users", 
		"URL=https://reqres.in/api/users?page=2", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	/* Get Single User */

	web_concurrent_start(NULL);

	web_url("js_2", 
		"URL=https://www.googletagmanager.com/gtag/js?id=UA-174008107-1&l=dataLayer&cx=c", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("js_3", 
		"URL=https://www.googletagmanager.com/gtag/js?id=G-CESXN06JTW&l=dataLayer&cx=c", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://reqres.in/", 
		"Snapshot=t44.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* Post */

	web_add_cookie("_ga_CESXN06JTW=GS1.1.1707213607.1.0.1707213607.0.0.0; DOMAIN=reqres.in");

	web_add_cookie("_ga=GA1.1.192723986.1707213608; DOMAIN=reqres.in");

	lr_think_time(206);

	web_custom_request("users_2", 
		"URL=https://reqres.in/api/users", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"morpheus\",\"job\":\"leader\"}", 
		LAST);

	/* Put */

	lr_think_time(10);

	web_custom_request("2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		LAST);

	/* Patch */

	lr_think_time(9);

	web_custom_request("2_2", 
		"URL=https://reqres.in/api/users/2", 
		"Method=PATCH", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://reqres.in/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"Body={\"name\":\"morpheus\",\"job\":\"zion resident\"}", 
		LAST);

	/* Delete */

	lr_think_time(17);

	web_custom_request("2_3", 
		"URL=https://reqres.in/api/users/2", 
		"Method=DELETE", 
		"Resource=0", 
		"Referer=https://reqres.in/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}