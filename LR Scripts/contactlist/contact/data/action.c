Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("Telemetry.Request", 
		"URL=https://nw-umwatson.events.data.microsoft.com/Telemetry.Request", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"BodyBinary=\\x8A\\x0E\\x00\\x00<?xml version=\"1.0\"?>\n<req ver=\"2\">\n <tlm>\n  <src>\n   <desc>\n    <mach>\n     <os>\n      <arg nm=\"vermaj\" val=\"10\"/>\n      <arg nm=\"vermin\" val=\"0\"/>\n      <arg nm=\"verbld\" val=\"19045\"/>\n      <arg nm=\"vercsdbld\" val=\"3324\"/>\n      <arg nm=\"verqfe\" val=\"3324\"/>\n      <arg nm=\"csdbld\" val=\"3324\"/>\n      <arg nm=\"versp\" val=\"0\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"lcid\" val=\"1033\"/>\n      <arg nm=\""
		"geoid\" val=\"113\"/>\n      <arg nm=\"sku\" val=\"48\"/>\n      <arg nm=\"domain\" val=\"0\"/>\n      <arg nm=\"portos\" val=\"0\"/>\n      <arg nm=\"ram\" val=\"12286\"/>\n      <arg nm=\"svolsz\" val=\"149\"/>\n      <arg nm=\"wimbt\" val=\"0\"/>\n      <arg nm=\"blddt\" val=\"191206\"/>\n      <arg nm=\"bldtm\" val=\"1406\"/>\n      <arg nm=\"bldbrch\" val=\"vb_release\"/>\n      <arg nm=\"os\" val=\"Windows\"/>\n      <arg nm=\"osver\" val=\"10.0.19041.3324.amd64fre.vb_release.191206-1406\"/"
		">\n      <arg nm=\"buildflightid\" val=\"\"/>\n      <arg nm=\"expid\" val=\"\"/>\n      <arg nm=\"edition\" val=\"Professional\"/>\n     </os>\n     <hw>\n      <arg nm=\"form\" val=\"1\"/>\n      <arg nm=\"arch\" val=\"9\"/>\n      <arg nm=\"deviceclass\" val=\"Windows.Desktop\"/>\n      <arg nm=\"sysmfg\" val=\"VMware, Inc.\"/>\n      <arg nm=\"syspro\" val=\"VMware7,1\"/>\n      <arg nm=\"bv\" val=\"VMW71.00V.16707776.B64.2008070230\"/>\n      <arg nm=\"ram\" val=\"12288\"/>\n      <arg nm=\""
		"proccnt\" val=\"4\"/>\n      <arg nm=\"proclsp\" val=\"2095\"/>\n      <arg nm=\"wscpusc\" val=\"0\"/>\n      <arg nm=\"wsdsksc\" val=\"0\"/>\n      <arg nm=\"wscpudn\" val=\"Intel(R) Xeon(R) Gold 6230 CPU @ 2.10GHz\"/>\n      <arg nm=\"wsdgsc\" val=\"0\"/>\n      <arg nm=\"aoac\" val=\"0\"/>\n      <arg nm=\"bssku\" val=\"\"/>\n      <arg nm=\"chid\" val=\"{e66fedaa-d317-5223-84c7-2eb45f71c90f}\"/>\n      <arg nm=\"sdksz\" val=\"350\"/>\n     </hw>\n     <ctrl>\n      <arg nm=\"tm\" val=\""
		"133523003711432180\"/>\n      <arg nm=\"mid\" val=\"C2D308F8-25AB-49B9-9B4A-F8F443F15738\"/>\n      <arg nm=\"sample\" val=\"42234205\"/>\n      <arg nm=\"msft\" val=\"0\"/>\n      <arg nm=\"test\" val=\"0\"/>\n      <arg nm=\"scf\" val=\"0\"/>\n      <arg nm=\"commercialid\" val=\"\"/>\n      <arg nm=\"telemetry\" val=\"Optional\"/>\n     </ctrl>\n    </mach>\n   </desc>\n  </src>\n  <reqs>\n   <req key=\"1\">\n    <namespace svc=\"watson\" ptr=\"generic\" gp=\"generic\" app=\"msedge.exe\">\n    "
		" <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n    </namespace>\n    <ctrl>\n     <arg nm=\"reportid\" val=\"0933f3dd-977f-44f1-b723-71187c3a805e\"/>\n     <arg nm=\"procmeta.Channel\" val=\"\"/>\n     <arg nm=\""
		"procmeta.MetricsClientId\" val=\"ef638bb3-0e27-43db-b180-ab00c9ce58ac\"/>\n     <arg nm=\"procmeta.MetricsClientIdHash\" val=\"-6926658363340494177\"/>\n     <arg nm=\"procmeta.MetricsSessionId\" val=\"116\"/>\n     <arg nm=\"procmeta.OfficialBuild\" val=\"1\"/>\n     <arg nm=\"procmeta.RuntimeVariationsSeedETag\" val=\"&quot;9JTaHLbLIoXB8Hrf7MmbKc5uR2GodGlO3xbl+MUBQBk=&quot;\"/>\n     <arg nm=\"procmeta.UXConfigCorrelationId\" val=\"32qeUCA7hshktCZh1abcGQK57j/DHwPFKIKKw/Hmq4I=\"/>\n     <arg nm="
		"\"procmeta.VariationsSeedETag\" val=\"&quot;x8JScx5/eTR/nZqtUeYCjrTS4iMf1QA2Q1S0ErJA1Ks=&quot;\"/>\n    </ctrl>\n    <cmd nm=\"event\">\n     <arg nm=\"eventtype\" val=\"crashpad_exp\"/>\n     <arg nm=\"cat\" val=\"generic\"/>\n     <arg nm=\"p1\" val=\"msedge.exe\"/>\n     <arg nm=\"p2\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p3\" val=\"msedge_elf.dll\"/>\n     <arg nm=\"p4\" val=\"121.0.2277.112\"/>\n     <arg nm=\"p5\" val=\"3081623\"/>\n     <arg nm=\"p6\" val=\"utility\"/>\n     <arg nm=\""
		"p7\" val=\"0x517a7ed\"/>\n     <arg nm=\"p8\" val=\"0\"/>\n     <arg nm=\"appsessionguid\" val=\"00002448-0002-0035-d2a4-aae4765eda01\"/>\n    </cmd>\n   </req>\n  </reqs>\n </tlm>\n</req>\n", 
		LAST);

	web_add_cookie("MUID=3FB288A77D7E6FC13A379A107C2C6E33; DOMAIN=business.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=3BE0431A9B0049D9A20B0E44F490E096&dmnchg=1; DOMAIN=business.bing.com");

	web_add_cookie("MMCASM=ID=D2631CDB20CA4BC9B1D178BCF01A27A6; DOMAIN=business.bing.com");

	web_add_cookie("SRCHUSR=DOB=20230213&T=1698920020000; DOMAIN=business.bing.com");

	web_add_cookie("BFBUSR=BAWAS=1&BAWFS=1; DOMAIN=business.bing.com");

	web_add_cookie("EDGSRCHHPGUSR=CIBV=1.1276.5-affinity; DOMAIN=business.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1700625981797&MRB=0; DOMAIN=business.bing.com");

	web_add_cookie("MSPTC=2UrbhxqCe5C1nsXUroHsuMEG1tnzKiN7Z7Xc90Nput4; DOMAIN=business.bing.com");

	web_add_cookie("BFB=AxBJEYsa3zk8WmJEU7BHBGJ498iHLZI4XXvH77X-c14cQseTlnaWL3-WMrKVcoInacJKuAqBD7JkcpY32ZgmUk-E2UqiO0TshzYeAYL6LylFpt324a9HRVNVUW9M53Uc-dorfYnVjDpORzvsuk3zt5l4IYA-lkTa6Jd6kBSe6oJGtwDa7Ns9oP6U7vVRqRhG5XA; DOMAIN=business.bing.com");

	web_add_cookie("_BINGNEWS=SW=1217&SH=529; DOMAIN=business.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=12.944945335388184|LON=77.60617065429688|N=Bengaluru%20South%2C%20Karnataka|ELT=9|&CLOC=LAT=12.9378|LON=77.547|A=10476|TS=240213042719|SRC=I&BID=MjQwMjEzMDk1NzE5XzQ2YzJjNGFkMGMyYTllYWFkYmE1OTNjZjRhNjI1NGI2MTYyNDYxZWZlMTcxZmJiN2RkMjAwZGQ0MmRhNDZmOTE=; DOMAIN=business.bing.com");

	web_add_cookie("ACLUSR=T=1706937074000; DOMAIN=business.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=123&ihpd=0&ispd=3&rc=200&rb=0&gb=0&rg=200&pc=200&mtu=0&rbb=0&g=0&cid=&clo=0&v=3&l=2024-02-02T08:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&o=2&p=&c=&t=0&s=0001-01-01T00:00:00.0000000+00:00&ts=2024-02-03T05:21:48.2632016+00:00&rwred=0&wls=&wlb=&lka=0&lkt=1&TH=&aad=1&ccp=&wle=&ard=0001-01-01T00:00:00.0000000&rwdbt=0001-01-01T00:00:00.0000000&rwflt=0001-01-01T00:00:00.0000000; DOMAIN=business.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=en&DM=0&IG=4BD6E2C0D93E4CE797A2BDE556915994&PV=10.0.0&BRW=N&BRH=S&CW=1232&CH=572&SCW=1217&SCH=4133&DPR=1.0&UTC=330&CIBV=1.1536.2&EXLTT=31&HV=1707110847&PRVCW=1232&PRVCH=572&SPLSCR=1; DOMAIN=business.bing.com");

	web_add_cookie("OID=AxARN5hDKnyO3ZU8bYkqbQmftCnypZxP3u0zK1xtLfEQyAi-wXZWqbP7rEqv-UB1QTBbhnM_WLNQw0Glw9upKTIyYnhQXWXNckLBMowElyJd67zWU0cTRjB7jrKoJVUAqGiEuYxi6zYIuVOEqzzC4guh; DOMAIN=business.bing.com");

	web_add_cookie("OIDI="
		"gxBLvpFKysjtlKZpHn5ntc0cHStK_pO4WMtfjwALGH7UEMO8YN3-esIR765rNdjwL25YatZZry-w7PNva9X4o-xT6YpXbubHJ0qeLxXMlDnsgICkL63dJDX0V8nerhJbQa-wj0azGiMTehNvlofKcwr7R2qmAuQiSbOG1aZUe334BI2c1Askk1a8unqHR9JeDNhxL89c8pjlUXTKFnWxBjKCfoMW7EVswV-fHrOMJbrfgCtxm5rYSIEpRG3zSe_FF9ZMyAFOBKjJOBqmA7bOaOFkNC3C_2nfFrZfoRc8FzmWMs7EtL3CwQxFDRR64txBHESGnoexC-J-MkipmDXdqU2nDa4yKACLxp2iFzPj0cCvssqL9wpg6OUeEZkOo3wSVJXLJnUQwMdxFzBZzMN1ZlS1DYUzGUCqNXswWe87HsuuxwPkLYmElZ-Atza--qwbdIe4EKnQzzcuF7X23t35aPZzJKIz9dLcN3KLfkCkUBybKAO01yhyGv"
		"RwrmCTKrHcMPgOsrvyyJVTgChbVnv3-_K4B18uE8fcZOB3NHd8nP1C-jdq2T4g8d9QLweJqWpkzcbpjPX2WlHqg_9Gmz1awzWuvMV7Q-VSj6LEjgIgAc2HxjWlniFmngHAIm5zFW9e-KquO5BJGdrbiy42APolcCU1sHaj5pmnAioY24iRsfg1Iw_cXpdnfgCLbr5A1fNJSGqbKvPXgVyZfqtCqH2jDoEqlAqUTcFtxzMZvHjU2pUCwGKJEhzLQhVI7_G_vagefUl1lgzF74LumBnuBOH2y8XcdW364XymfNsLuwL28XE6w_DFvUlWAwKEqdlIlh9Gurz4QaIShXUSuymawPE2yZKXxcJBtWFUOXj-DKtzepiOJOBKsVCZ3UVcZLdT2w2qLxovdijhro5230EVvhwV-wXoQQMvOGhHe3-BayAyJuz4L9swrt2oMV9w19fUTeGBx95e1xNX3BJrxHerl_jWbsOqb5YKi_01ZuEbjZvRUHSP"
		"2WTiSsGIHSazqWEeDRAblMhkFnTg4nJM-mtnJ_CGeBmks4YVYWTcJvAtNfH5mhN_kE9Y2764oRAe4vbCxoJmCi1sWudOcisXneHuP3xS85QfQj4H5M5IzIAm2FQ-Eqe06bEGFvmucN0hHdt65BiHt7_szHPgB5rdj88zWSqcMU-udQ_tYKkTv5Y1bjM7a1JNR7-4sJsdXwb02hz6xjPf6mlZnlrJOpuTNjeqrCmcNLuDPNKzN-QXX5EqSDzd8z7c5QWvOpHzecqokzEYhwIK-yKbFdDo5Mjw0vECKm_-z-pMxBkqyBIB2jNFySUCNz-mJV5TJof5tkhXHO7pcBvc5OCiYieb5NB-1h1zsSXCqLP6UfAiFMeHtz0YiYXPG8f9e-2o3L7Q8hsBdZVnZJHcoQlNRinRXglm641nMFLtVo3w_3Og07sI8pvaz8DpVOpvYGD3E1ihbjmQxXJhtbKywFXiXcI41W6Na-HmOOAw70L0e9SC8VSRcz"
		"a9knREAsUIDnZpdXPFOqXW_tMdfkaZ8XUMCJ2DGxnf_kXh0ijzBWVxU1DpLYwO7AYGrfGMirDnLXOowgQCyAaekixdAOfhupOsWHobesyOs5yY8zUhU83wQ8CwTykGlWZXhZTAZXaYlJJ9Az1UiQ7bHn4xOlSjLmDPBBnYZ8dDBguJmxMg3WMX_Cv8YvkQvYEXceVarOsKL24lcPm6czD06nJpON03ayXP424r4lISprYURTq8WDT8U5uN1T57pnGFK7x8WusqUSLqU5tbyQ3GalUn4L1LkZshrICTWbBtS_pcaRQtIolMMR9DgR20yjAOathdW054bhZi5wrKiwa0GiWZ1RnftMfrdqql4rIrNvQifSPWoEBmi36zOUKBBDaQKti0TP7yTWasHjRtbnqIKIjAGVi4sjKDm5OTCdGrbz02J3Bp4x1gCTXU3MMquTC1hBXejR4uktFnLzLgyGcX24rPt6bpGpkn_jj1tSy3mA5j6rdnAPN2"
		"ws-Xz2ndnOSWvN3CqYO4Sg; DOMAIN=business.bing.com");

	web_add_cookie("OIDR="
		"gxCfvmMSON0YaZN5LmQ_CGDzbmZ0ebAZdPe8cm_SPeeixBkLmECt7jFhtVTHSUp1812iUnCconrvT2VwT07HlFI8S3c0ffOZtPXyimk5UNdH8SQyz9CavFDgeo1ORIfhHAvpWAmLHsgFxeW3hKWpdlC2nz1eGzWS1P8gVW5hCzEYeUqFDS7MCq7z9fuB8AqryduBgySgyZHom6-EMZbsSpprdDXntjoTAa8c1DKD1TpinUX8QqpfUBdVE3mWMwy2ku7KIeICKkyWUr5MgAEsraUhmr5z9TQZyyORJvKv9BaH8hq-wKW15UkDsFLIsCPVbGHvWUwtDA5prnEF808EErjTV8Wlm_kqu4IHNcOYaA4gA_dXwHLn_J4UThHjv1nH00yBQ1Io8PzSccTR6PvEaBwmsB6SX9wJzIh8n06ciGdp1zUTKM7HTjdAmIi5r_77snAr99aU0obMWI7vIWZRwghBxSZ9XY8hTqjgmFXBYfucL-3wEC2_w8"
		"8w2TzEQzTEKP18T2zWrLjwTrKwg1fqd-IfBGDpyxcu8yeev_XTEEJwk5hx39866zI4WcOCB1sMM63ip8_Ld0cG8XTv2Io180vbFwLo40nmqg6memC55XbL90bVXasSPsxMDdb-vpZV_Gq-oA8fRYeXeHOMhY9Afb-3tz7Ji55OIWW8zZiQh5mk4OFkw4mN0PT8QsI7NKnKLX608WmCulcpPG0rTbKY_JJYNoe9ABu7UsObhf_dGZ4cNQ3mOWOYh0ip9ImzyQByCnZOMAYODEhWiAsjU9dVsVoMeSF8ZEPr7QI2OTAapfHNsqAhb-kteLrt0WMlA2KFRivX8mk8X-4LY6bjYJ3P3YRCWJt_pTUJc7HW4S_Wpv0lqpzg0pW0v0xptQjpZu4kXxidMuEtyDlPkf3kpPyTGcxUkO7yms00Nq_EXYjHOaZ29W5BcD4I7fxNdPcq0LM5fSVMkYcmNyKuWQH-b196z7hu7f99sjI61kCsK3Z9NYUu"
		"VLcb5d2qg95BQbrDi5DpASa_vHTU-NJtTW2bJnDeo9KIIynfsj329yE_1I--e-aG6vCOuMgOL8ZbIO_LxDmiv6xhoUegl4PVJZdZUoaeFokUFLBOJz5lBCDiCnF5G0mEPzInG8ZqFjhnpgpvvlxM4b-Tq3-LtquCqrowfQ3hZ9ntT6muB2onNW3DPjd6fHRfw_OlGEbY4m_8YiA9AFIAxf8; DOMAIN=business.bing.com");

	web_add_cookie("ACL=AxAu1gxqXBdEMSHFIr4EpYry_4Nhon8Dce6c5gDbZSc4TCgBzj249cKImZ0y4GOK_q8kcL7cstmKtWjlDKHaeEfw; DOMAIN=business.bing.com");

	web_url("settingswithflights", 
		"URL=https://business.bing.com/work/api/v2/tenant/my/settingswithflights?&clienttype=edge-omnibox", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("flipkart.com", 
		"URL=https://flipkart.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("report_2", 
		"URL=https://bzib.nelreports.net/api/report?cat=bingbusiness", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/reports+json", 
		"Body=[{\"age\":13,\"body\":{\"elapsed_time\":3025,\"method\":\"GET\",\"phase\":\"application\",\"protocol\":\"http/1.1\",\"referrer\":\"\",\"sampling_fraction\":1.0,\"server_ip\":\"13.107.6.158\",\"status_code\":401,\"type\":\"http.error\"},\"type\":\"network-error\",\"url\":\"https://business.bing.com/api/v1/user/token/microsoftgraph?&clienttype=edge-omnibox\",\"user_agent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 Safari/537.36 Edg/"
		"121.0.0.0\"}]", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("business", 
		"URL=https://2.rome.api.flipkart.com/api/3/data/collector/business", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("business_2", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("vh=606; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("vw=1272; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_3", 
		"URL=https://2.rome.api.flipkart.com/api/3/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"zdu5dfnbrk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"None\",\"pt\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|launchedGroup|bee87c24|h\",\"expId\":\"oneviewhomepagedesktop\"}],\"t\":1707826780872}]}", 
		LAST);

	web_custom_request("business_4", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"zdu5dfnbrk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"None\",\"pt\":\"None\",\"meta\":{\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}}},\"e\":[{\"t\":1707826780978,\"en\":\"CEE\",\"er\":\"ViewportDifference\",\"esc\":\"JavaScript\",\"et\":\"Unknown\",\"es\":\"Non-Fatal\",\"em\":\"width: 1272, height: 606, dpr: 1\"}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("business_5", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707826781315,\"en\":\"PV\",\"_ev\":\"3.5\",\"ib\":false}]}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_url("codes.json", 
		"URL=https://static-assets-web.flixcart.com/www/linchpin/batman-returns/codes.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("collector", 
		"URL=https://collector-pxgnttli3a.px-cdn.net/api/v2/collector", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=payload=aUkQRhAIEGJqAwACCwcQHhBWEAhJEGJqAwMEBgcQCBBaRkZCQQgdHUVFRRxUXltCWVNARhxRXV8dEB4QYmoDAAACBRAIAh4QYmoDAAYHChAIEGVbXAEAEB4QYmoDAwsCABAIAh4QYmoDAwcEAhAIAwIDAgIeEGJqAwG^AABSgoQCAEEAgIeEGJqAwMBCgcQCAMFAg}DUKAAQFNCgIDAgseEGJKqAwAACgIQCA8MFDAgUKAAQNaFCgIDCgAeEGJqAwM>GCwQQCBAACwAEDAVFXA`K}Gh9RUwRTHwMDV1cfC1ZWAx8DC1cGVANWVlYDAgYQHhBiagMABwKQ7GEAhcR15eHhBiagMABwQHEAgfAx4QYmo7DAwEFCxAIVFNeQVdPT28=&appId=PXgNtTli3A&tag=v8.7.8&uuid=29263ce0-ca6a-11ee-9dd1-19e4f1ddd104&ft=318&seq=0&en=NTA&pc="
		"6889643062592880&rsc=3", 
		LAST);

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767%7CMCMID%7C64661683922883419631748055552660139383%7CMCAAMLH-1708431581%7C12%7CMCAAMB-1708431581%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707833981s%7CNONE%7CMCAID%7CNONE; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn=HomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("pxcts=711478f1-ca6b-11ee-b534-aafce86b5791; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("_pxvid=71146fe0-ca6b-11ee-b534-69cb5dc59218; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_6", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"BDE\",\"_ev\":1.3,\"ty\":\"INIT_SUCCEED\",\"v\":\"en\",\"ttc\":\"166\",\"t\":1707826781320},{\"t\":1707826782459,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":1,\"wvt"
		"\":\"NAV_EXPANDABLE\",\"wtp\":\"rich_navigation\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"st\":1707826770109,\"pv\":100,\"f\":true,\"ct\":\"contentCollection\"},{\"t\":1707826782460,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"wk\":\"2.bannerAdCard.BANNERADS\",\"st\":1707826770109,\"pv\":100,\"f\":true,\"ct\":\"bannerAdCard\"},{\"t\":1707826782460,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"biid\":\""
		"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"wk\":\"3.dealCard.OMU\",\"st\":1707826770109,\"pv\":43.70003640651703,\"f\":true,\"ct\":\"dealCard\"},{\"t\":1707826782460,\"en\":\"DWI\",\"_ev\":\"1.12\",\"p\":4,\"wvt\":\"RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_4.F8A4PJN9HL2I\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"wk\":\"4.rhsAnnouncement.RHS_ANNOUNCEMENT\",\"st\""
		":1707826770109,\"pv\":42.70077049732208,\"f\":true,\"ct\":\"rhsAnnouncement\"},{\"t\":1707826782461,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.BW2NFVQPU0EC\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"Cat_Mob_HPW_MB Intirigue\",\"wps\":2,\"pid\":\"MOBGWH8SRNNZZ3DZ\",\"piid\""
		":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770113,\"pv\":100,\"f\":true},{\"t\":1707826782462,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3.U07UP4YSN5ZX\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"dealCard\",\"ctl\":\"Top "
		"Selling Dell Keyboard\",\"wps\":3,\"pid\":\"ACCFT4GGGMH5AUGE\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1632985583,\"st\":1707826770113,\"pv\":27.90798544883728,\"f\":true},{\"t\":1707826782462,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3.Q5LU1U8PHMK6\","
		"\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"dealCard\",\"ctl\":\"Top Mirrorless Cameras\",\"wps\":3,\"pid\":\"CAMFMN29FUTHMBYK\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1632985583,\"st\":1707826770113,\"pv\":27.90798544883728,\"f\":true},{\"t\":1707826782462,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\""
		"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3.UDG9W07DN4PD\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"dealCard\",\"ctl\":\"Premium PowerBanks\",\"wps\":3,\"pid\":\"PWBG2TFBWDT7UEHU\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1632985583,\"st\":1707826770113,\"pv\":27.90798544883728,\"f\":true},{\"t\":1707826782462,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":4,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\""
		"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3.AYZ2E25L30EX\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"dealCard\",\"ctl\":\"Best of Shavers\",\"wps\":3,\"pid\":\"SHVGJVRKV6DPQFGK\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1632985583,\"st\":1707826770113,\"pv\":27.90798544883728,\"f\":true},{\"t\":1707826782462,"
		"\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":5,\"wvt\":\"TEST_OMU_CAROUSEL_V3\",\"wtp\":\"omu\",\"wtl\":\"Best of Electronics\",\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3.ZIEW022R2RTS\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"dealCard\",\"ctl\":\"Monitors\",\"wps\":3,\"pid\":\"MONFV5HRNF4QFVG4\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_3\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1632985583,\"st\""
		":1707826770113,\"pv\":21.58072143793106,\"f\":true},{\"t\":1707826782462,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":0,\"wvt\":\"RHS_ANNOUNCEMENT\",\"wtp\":\"rhs_announcement\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_4.F8A4PJN9HL2I\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"rhsAnnouncement\",\"ctl\":null,\"wps\":4,\"pid\":null,\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_4.F8A4PJN9HL2I\",\"pbiid\":\""
		"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":-1724375948,\"st\":1707826770113,\"pv\":42.70077049732208,\"f\":true},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.CBUR1Q46W5F1\",\"ct\":\"navigationCard\",\"p\":1,\"f\":true,\"st\":1707826770113,\"pv\":100,\"wps\":1,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782462},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.ZRQ4DKH28K8J\",\"ct\":\""
		"navigationCard\",\"p\":2,\"f\":true,\"st\":1707826770113,\"pv\":100,\"wps\":2,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782462},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.B5YIQCE8VHYO\",\"ct\":\"navigationCard\",\"p\":3,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":3,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782462},{\"en\":\"DCI\",\"iid\":\""
		"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.JKA0LKU8OMVP\",\"ct\":\"navigationCard\",\"p\":4,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":4,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782462},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.A7YT3X39TTON\",\"ct\":\"navigationCard\",\"p\":5,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":5,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\""
		":1707826782468},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.LO4IWVHA61BX\",\"ct\":\"navigationCard\",\"p\":6,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":6,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782468},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.V4ZPKTOAO321\",\"ct\":\"navigationCard\",\"p\":7,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":7,\"wk\":\""
		"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782468},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707826770114,\"pv\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782468},{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.EGGUS4T1KINV\",\"ct\":\"navigationCard\",\"p\":9,\"f\":true,\"st\":1707826770114,"
		"\"pv\":100,\"wps\":9,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826782468}]}", 
		LAST);

	web_custom_request("collector_2", 
		"URL=https://collector-pxgnttli3a.px-cdn.net/api/v2/collector", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"BodyBinary=payload="
		"aUkQRhAIEGJqAwMHCwIQHhBWEAhJEGJqAwMGAQMQCAMFAgUKAAUBAQIACwAeEGJqAwMHAAsQCAEBAgYFCwUBHhBiagMDBwcHEAgAAwUABAYLBgUAHhBiagMDCgEBEAgGAgEDBwIGAx4QYmoDAwoGAhAIEGZHVxJ0V1ASAwESAAIABhIDBQgGCwgGABJ1f2YZAgcBAhIae1xWW1MSYUZTXFZTQFYSZltfVxsQHhBiagMDBwAEEAhUU15BVx4QYmoDAwQKBhAIVFNeQVceEGJqAwMKAwAQCFRTXkFXHhBiagMAAQEHEAhGQEdXHhBiagMAAgoCEAgCHhBiagMDBAUKEAhUU15BVx4QYmoDAwEGCxAIEERbQVtQXlcQHhBiagMAAQsFEAhUU15BVx4QYmoDAwEKBRAIAh4QYmoDAAMHAhAIAwAKAh4QYmoDAAECBhAIVFNeQVceEGJqAwMEBwMQCAQKAh4QYmoDAwoEBRAIEF9bQUFbXFUQHh"
		"BiagMAAAcGEAhUU15BVx4QYmoDAwcGAhAIRkBHVx4QYmoDAwcGChAIVFNeQVceEGJqAwMGBgQQCEZAR1ceEGJqAwAHBwIQCAIeEGJqAwAGAQMQCAIeEGJqAwMLCwMQCAoeEGJqAwMKAQUQCAQCHhBiagMDBAEAEAgCHhBiagMDBgILEAgEHhBiagMDBQIDEAgQBAYFAAIHAwYAAwACAAQBAAsABwQQHhAAAgEEBgMHAgQHBAYEAAUEDwQDABAIEAcFBgMBBAAFAwADAQMHAgMIAwQHEB4QYmoDAAYHBhAIBgoFBB4QYmoDAwcBCxAIEAQGBwcEUQUFEB4QYmoDAwcAChAIEBAeEGJqAwAABQMQCBADAgACBVAAVBAeEGJqAwMKBgsQCBADAgACBVAAVBAeEGJqAwAGBAYQCBALAlcEBwYEBxAeEGJqAwMBBwQQCEZAR1ceEGJqAwAGAAQQCEZAR1ceEGJqAwMFCwMQCEZAR1ceEGJqAwMH"
		"AwUQCEZAR1ceEGJqAwAHAAIQCEZAR1ceEGJqAwAHAAYQCBAGa3EdBmtxUAZrcWAGa3FzBmtxVgZrcXAGa3FWBmtxZwZrcXUGa3VhBmtxWwZrcWYGa3F6BmtxVwZrcVAGa3FRBmtxZgZrdWEGa3ELBmtxUQZrcVcGa3FQBmtxUQZrcWoGa3VhBmt1VAZrdWEGa3FbBmtxVgZrcVcGa3FQBmtxcAZrcVMGa3VhBmt1UwZrcVsGa3FWBmtxVwZrcWYGa3FRBmtxZQZrdVAQHhBiagMABwAFEAgQUVMCVlEABlFUVAcBVFNUAAEEVlYCAlYHAAsHBwJUBwUQHhBiagMAAAQCEAgQf11IW15eUx0HHAISGmVbXFZdRUESfGYSAwIcAgkSZVtcBAYJEkoEBhsSc0JCXldlV1B5W0YdBwEFHAEEEhp5emZ/"
		"fh4SXltZVxJ1V1FZXRsScVpAXV9XHQMAAxwCHAIcAhJhU1RTQFsdBwEFHAEEEndWVR0DAAMcAhwCHAIQHhBiagMAAAYLEAhUU15BVx4QYmoDAwoLBRAIEAsCVwQHBgQHEB4QYmoDAwECARAIVFNeQVceEGJqAwMHAwcQCFRTXkFXHhBiagMAAwEBEAhUU15BVx4QYmoDAAEGAhAIVFNeQVceEGJqAwMFAQoQCFRTXkFXHhBiagMDBQABEAhUU15BVx4QYmoDAwEKCxAIVFNeQVceEGJqAwMKAQsQCFRTXkFXHhBiagMDBgQCEAhUU15BVx4QYmoDAAMCABAIVFNeQVceEGJqAwMBBQoQCFRTXkFXHhBiagMAAQMFEAhUU15BVx4QYmoDAwoCBhAIEAtQAwQCCgcBBANWAFFWUAYHCgcGA1QLC1EEUQsDAQFTEB4QYmoDAAMDChAIEFFcB18DAl5cRFVGRkdQVwcECgMCEB4QYmoDAwUGBB"
		"AIEFZWUFdWAQACCgJWUQdTUQQLVgsLBAUBClQEAlQDAAdWEB4QYmoDAwEFAxAIEFEDBlFWClZUCwpQAgIKBAcGVwRWAwsKClRXAgIKAAYAEB4QYmoDAAcCAxAIEFBWBQBQBlRWUVZQBwoAVAoKAARQBgBXB1ADVFFUBAtWEB4QYmoDAAACBRAIAh4QYmoDAwcBChAIAx4QYmoDAwsKBhAIEGZLQld3QEBdQAgScVNcXF1GEkBXU1YSQkBdQldARltXQRJdVBJcR15eEhpAV1NWW1xVEhUCFRtuXBISEhJTRhJTQBIaWkZGQkEIHR1BRlNGW1EfU0FBV0ZBH0VXUBxUXltKUVNARhxRXV8dYmpVfEZmXlsBcx1fU1tcHF9bXBxYQQgACAAGBQYEG25cEhISElNGElxWEhpaRkZCQQgdHUFGU0ZbUR9TQUFXRkEfRVdQHFReW0pRU0BGHFFdXx1ialV8RmZeWwFzHV9TW1wcX1tcHFhBCAAI"
		"AwAAAgECG25cEhISElNGElNWEhpaRkZCQQgdHUFGU0ZbUR9TQUFXRkEfRVdQHFReW0pRU0BGHFFdXx1ialV8RmZeWwFzHV9TW1wcX1tcHFhBCAAIAwABAwYDG25cEhISElNGElpGRkJBCB0dQUZTRltRH1NBQVdGQR9FV1AcVF5bSlFTQEYcUV1fHWJqVXxGZl5bAXMdX1NbXBxfW1wcWEEIAAgDAAEDAwFuXBISEhJTRhJcQGVAU0JCV0ASGlpGRkJBCB0dRUVFHFReW0JZU0BGHFFdXx0IBAgDBgEKBhsQHhBiagMDBAYHEAgQWkZGQkEIHR1FRUUcVF5bQllTQEYcUV1fHRAeEGJqAwMHCwUQCGlvHhBiagMAAgABEAgQEB4QYmoDAwEBBRAIVFNeQVceEGJqAwABAQIQCBADAgtOBAROBAROBQJOCgIQHhBiagMDBQIHEAgBAQEeEGJqAwMLAQoQCEZAR1ceEGJqAwMEAgAQCEZAR1"
		"ceEGJqAwACAAMQCBBUU15BVxAeEGJqAwAGAAMQCBBUU15BVxAeEGJqAwADAAYQCAMeEGJqAwMEAgsQCAMeEGJqAwAACwMQCBAQHhBiagMDCgoDEAhpEF5dU1ZmW19XQRAeEFFBWxAeEFNCQhBvHhBiagMDBwIKEAgQBgtXBwIKBlcQHhBiagMDBgcAEAgQBVEHVAsFAAYQHhBiagMAAAMKEAgQBAdWCgAEVwIQHhBiagMABgoDEAgQUwsABAtXAgIQHhBiagMDBQoCEAgQBwJTB1dRBwcQHhBiagMABwYGEAhGQEdXHhBiagMABwoLEAgQQUdRUVdXVldWEB4QYmoDAwcABhAIRkBHVx4QYmoDAAIECxAIaRBidnQSZFtXRVdAEB4QcVpAXV9XEmJ2dBJkW1dFV0AQHhBxWkBdX1tHXxJidnQSZFtXRVdAEB4Qf1tRQF1BXVRGEndWVVcSYnZ0EmRbV0VXQBAeEGVXUHlbRhJQR1teRh9b"
		"XBJidnQQbx4QYmoDAAAKBBAIBx4QYmoDAwcFBBAIRkBHVx4QYmoDAAEDChAIRkBHVx4QYmoDAwEKBhAIRkBHVx4QYmoDAwoKBBAIRkBHVx4QYmoDAwcKARAIEFdcH2dhEB4QYmoDAAYHChAIEGVbXAEAEB4QYmoDAwQKAxAIaRBXXB9nYRBvHhBiagMDBQcGEAgQf11IW15eUx0HHAISGmVbXFZdRUESfGYSAwIcAgkSZVtcBAYJEkoEBhsSc0JCXldlV1B5W0YdBwEFHAEEEhp5emZ/"
		"fh4SXltZVxJ1V1FZXRsScVpAXV9XHQMAAxwCHAIcAhJhU1RTQFsdBwEFHAEEEndWVR0DAAMcAhwCHAIQHhBiagMAAgEFEAhGQEdXHhBiagMDAQsCEAgfAQECHhBiagMDBAADEAgKHhBiagMDBAcFEAgDHhBiagMAAgoDEAgQdVdRWV0QHhBiagMDCwIKEAgQAAICAQIDAgUQHhBiagMAAQMGEAgQBxwCEhplW1xWXUVBEnxmEgMCHAIJEmVbXAQGCRJKBAYbEnNCQl5XZVdQeVtGHQcBBRwBBBIaeXpmf34eEl5bWVcSdVdRWV0bEnFaQF1fVx0DAAMcAhwCHAISYVNUU0BbHQcBBRwBBBJ3VlUdAwADHAIcAhwCEB4QYmoDAwoACxAIRkBHVx4QYmoDAwYEBhAIRkBHVx4QYmoDAAIHBhAIAB4QYmoDAwoAAxAIEHxXRkFRU0JXEB4QGYmoDAwYFCxAIEH9dSFteXlMQHhBiagMDBAUGE"
		"AhGQEdXHhBiagMAAAYDEAgCHhBiagMDAQUAEAhUU15BVx4QYmoDAwQKARAICxwFHhBiagMDBwQDEAgQBlUQHhBiagMDCgUFEAhGQEdXHhBiagMAAwICEAhGQEdXHhBiagMABwIEEAgQSgoEEB4QYmoDAAcCBRAIEAQGEB4QYmoDAAcCChAIaUkQUE^BTXFYQCBB8XUYScxpwQFNcVhAeEERXQEFbXVwQCBALCxBPHkkQUEBTXiFYQCBB/W1FAXUFdVEYSd1ZVVxAeEERXQEFbXVwQCBADAAMQTx5JEFBAU1xWEAgQcVpAXV9bR18QHhBEV0BBW11cEAgQAwADEE9vHhBiagMABwILEAhUU15BVx4QYmoDAAcDAhAIEBAeEGJqAwAHAwMQCBBlW1xWXUVBEB4Q}"
		"DYmoDAAcDABAIEAMCHAIcAhAeEGJqAwAHAwEQCBADAAMcAhwAAAUFHAMDABAeEGJqAwAHBgoQCEZAR1ceEGJqAwAHBgsQCEZAR1ceEGJqAwAHCwUQCAIeEGJqAwAHBQEQCBBWAQEAC1QFVhAeEGJqAwMKBgEQCAMACgIeEGJqAwMFCgMQCAUAAh4QYmoDAAMAAxAIAwAKAh4QYmoDAAMAChAIBAoCHhBiagMAAQoFEAgQAwAKAmoFAAIQHhBiagMAAgIBEAgABh4QYmoDAwEKAhAIAAYeEGJqAwMGCwYQCAMABQAeEGJqAwAGAwMQCAQCBB4QYmoDAAYGARpAIAh4QYmoDAAYGBRAIAh4QYmoDAwcBARAIRkBHVx4QYmoDAAIFCxAIVFNeQVceEGJqAwAHCgoQCBBFV1BZW0YQHhBiagMABwcDEAgQWkZGQkEIEB4QYmoDAAcHABAIEFRHXFFGW11cEkFaU0BXGhsSSRJpXFNGW0RXElFd"
		"VldvEk8QHhBiagMABwcBEAgQc0FbUx1xU15RR0ZGUxAeEGJqAwAHBAUQCBBFAVEQHhBiagMABwUEEAgQQVFAV1dcEB4QYmoDAAcHBxAISRBCXkdVVm0pGEAhJEAIQCEkQVBAIEFtcRldAXFNeH0JWVB9EW1dFV0AQHhBcEAgQYnZ0EmRbV0VXQBBPHhADEAhJEFQQCBBbXEZXQFxTXh9CVlQfRFtXRVdAsDpEGpB4QXBAIEHFaQF1fVxJidnQSZFtXRVdAEE8eEAAQCEkQVBAIEFtGcRldAXFNeH0JWVB9EW1dFV0AQHhBcEAgQcVpAXV9bR18SYnZ0EmRbV0VXQBBPHhABEAhJEFQQCBBbXEZXQFxTXh9CVlQfRFtXRVdAEB4QXBAIEH9bUUBdQV1URhJ3VlVXEmJ2dBJkW1NdFV0AQTx4QBhAISRBUEAgQW1xGV0BcU14fQlZUH0RbV0VXQBAeEFwQCBBlV1B5W0YSUEdbXkYfW1wSYn"
		"Z0EE9PHhBCXkdVW1xBbV5XXBAIB08eEGJqAwAHCgEQCEkQQV9WEAhJEF1ZEAhGQEdXHhBXShAIVFNeQVdPTx4QYmoDAAcFChAISU8eEGJqAwAHCwYQCFRTXkFXHhBiagMABwQEEAhUU15BVx4QYmoDAAcFAxAIEAtUAlRTCgECEB4QYmoDAAcFCxAISRBBR0JCXUBGEAhGQEdXHhBBRlNGR0EQCEkQV1RUV1FGW0RXZktCVxAIEAZVEB4QQEZGEAgCHhBWXUVcXltcWRAICxwFHhBBU0RXdlNGUxAIVFNeQVdPTx4QYmoDAAcKAxAIEFZXVFNHXkYQHhBiagMABwoAEAgBHhBiagMABwoFEAhUU15BVx4QYmoDAAAFChAIRkBHVx4QYmoDAwQLBhAIVFNeQVceEGJqAwAACwYQCFRTXkFXHhBiagMABwMGEAhGQEdXHhBiagMABwMHEAgQZktCV3dAQF1ACBJxU1xcXUYSQFdTVhJCQF1C"
		"V0BGW1dBEl1UEkdcVldUW1xXVhIaQFdTVltcVRIVRVtWRloVGxAeEGJqAwAHAwQQCBBFV1BZW0YQHhBiagMABwMFEAgBAR4QYmoDAAcDChAIVFNeQVceEGJqAwAHBgcQCFRTXkFXHhBiagMABwsBEAhUU15BVx4QYmoDAAcLBxAIEHNHVltddlNGUxxhZHVzXFtfU0ZXVnNcVV5XHGFkdX9XRlNWU0ZTd15XCX1dcRhAeEGJqAwADBAsQCAAeEGJqAwMLAgAQCAMeEGJqAwMHBAIQCAM?"
		"AAwILHhBiagMDAQEAEAgDBQIFCgAEBQoAAwcAHhBiagMAAAYKEAgBBAICHhBiagMDAQoHEAgDBQIFCgAEBQoCAwILHhBGmiagMAAAoCEAgDBQIFCgAEBQoACgQLHhBiagMDBgsEEAgQAAsABAFRVwIfUVMEUx8DA1dXHwtWVgMfAwtXBlQDVlZWAwIGEB4QYmoDAAcEBhAIXEdeXh4QYmoDAAcEBxAIHwMeEGJqAwMBBQsQCFRTXkFXT08eSRBGEAgQYmoDAwsABxAeEFYQCEkQYmoDAwsEBRAIEAcCUVcDBARTEB4QYmoDAwcCBxAIEAMCUFcDVlcHEB4QYmoDAwQCAhAIEFEKAAMHAwVQEB4QYmoDAwcCBBAIEFAGB71YEBVcGEB4QYmoDAAIDBBAIVFNeQVceEGJqAwMLAAYQCBBQBQALUwsLUBAeEGJqAwMLAgAQCAAeEGJqAwMHBAIQCAMAAwMGHhBiagMAAAoCEAgDBQIFCgAEBQ"
		"oACgQLHhBiagMDBgsEEAgQAAsABAFRVwIfUVMEUx8DA1dXHwtWVgMfAwtXBlQDVlZWAwIGEB4QYmoDAAcEBhAIXEdeXh4QYmoDAAcEBxAIHwMeEGJ7qAwMBBQsQCFRTXkFXT09v&appId=PXgNtTli3A&tag=v8.7.8&uuid=29263ce0-ca6a-11ee-9dd1-19e4f1ddd104&ft=318&seq=1&en=NTA&cs=533029ded396b277296081adcec806108f0ee62383a8580a0ec4986b5c86c3be&pc=2355140650272712&sid="
		"71147652-ca6b-11ee-b534-aafce86b5791\\xF3\\xA0\\x84\\xB1\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB0\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB8\\xF3\\xA0\\x84\\xB2\\xF3\\xA0\\x84\\xB7\\xF3\\xA0\\x84\\xB3\\xF3\\xA0\\x84\\xB3\\xF3\\xA0\\x84\\xB0\\xF3\\xA0\\x84\\xB2\\xF3\\xA0\\x84\\xB9\\xF3\\xA0\\x84\\xB2&vid=71146fe0-ca6b-11ee-b534-69cb5dc59218&cts=711478f1-ca6b-11ee-b534-aafce86b5791&rsc=4", 
		LAST);

	/* searchitem */

	web_add_cookie("_px3=2df9703546500bc7e69fa8a6127e27dedfb4a2c7d69eef87b46c7b371d03bf51:ZUmqk4oCu+9ceYHEMTvF9rVxbC7T6QV/jtD6iiHdgsivfN3k3Bxq2TuryOLrN5cvIBJiQ12l+Kbsdddi71x9QQ==:1000:vBXOhbhC6n/EaNEcHmG2tll9ab0cD/Nx+5UacK0m9sUt5/WMxBDDgy3YFhTZ/iArMoXprpW57Q7hBVg2krcKFvB+FWm6PGObNpBw2tNVONVhzSTn5ikiqoNPbbh/URoKwPw/4zAE2n6ilLtu4IVuQ5zItyUagDOlkz3qCC/WlsW8mwQ7s6U7yhvKiv7PS1AA8rNgWNg1bk6hZWUS3jOWrguJUYxioeOzuuAQUU6vTrM=; DOMAIN=2.rome.api.flipkart.com");

	lr_think_time(26);

	web_custom_request("business_7", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707826770083,\"pv"
		"\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826785340},{\"t\":1707826785386,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.7RG9A42948N0\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\""
		"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770085,\"pv\":100,\"f\":true},{\"t\":1707826788416,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.85UJDY9U0SR2\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl"
		"\":\"AC-HPW7-APPnDT-BASE\",\"wps\":2,\"pid\":\"ACNGSRFD7WGJBPH5\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770085,\"pv\":100,\"f\":true},{\"t\":1707826791413,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":4,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.JH98VFEFZMTI\",\""
		"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770087,\"pv\":100,\"f\":true},{\"t\":1707826794478,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\""
		":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.BW2NFVQPU0EC\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"Cat_Mob_HPW_MB Intirigue\",\"wps\":2,\"pid\":\"MOBGWH8SRNNZZ3DZ\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770083,\"pv\":100,\"f\":false},{\"t\":1707826797448,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\""
		":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.7RG9A42948N0\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770086,\"pv\":100,\"f\":false},{\"t\":1707826800452,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\""
		"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.85UJDY9U0SR2\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"AC-HPW7-APPnDT-BASE\",\"wps\":2,\"pid\":\"ACNGSRFD7WGJBPH5\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770086,\"pv\":100,\"f\""
		":false}]}", 
		LAST);

	web_custom_request("autosuggest", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("business_8", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707826803763,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":4,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.JH98VFEFZMTI\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770091,\"pv\":100,\"f\":false},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"\",\"ua\":1,\"t\""
		":1707826809560}]}", 
		LAST);

	web_custom_request("autosuggest_2", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826809568,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_9", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826809662}]}", 
		LAST);

	web_custom_request("autosuggest_3", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"m\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826812932,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_10", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826813007}]}", 
		LAST);

	web_custom_request("business_11", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"DCI\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_1_372UD5BXDFYS_MC.CSZJ9U6U82HR\",\"ct\":\"navigationCard\",\"p\":8,\"f\":true,\"st\":1707826770084,\"pv"
		"\":100,\"wps\":8,\"wk\":\"1.navigationCard.RICH_NAVIGATION\",\"_ev\":\"3.1\",\"t\":1707826810584},{\"t\":1707826810633,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.BW2NFVQPU0EC\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"Cat_Mob_HPW_MB Intirigue\",\"wps\":2,\"pid\":\""
		"MOBGWH8SRNNZZ3DZ\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770082,\"pv\":100,\"f\":false},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.mobiles\",\"ct\":\"TRENDING\",\"p\":1,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"mobiles\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.shoes\""
		",\"ct\":\"TRENDING\",\"p\":2,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"shoes\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.t shirts\",\"ct\":\"TRENDING\",\"p\":3,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"t shirts\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.laptops\",\"ct\":\""
		"TRENDING\",\"p\":4,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"laptops\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.watches\",\"ct\":\"TRENDING\",\"p\":5,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"watches\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.tv\",\"ct\":\"TRENDING\",\"p\":6,"
		"\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"tv\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"SOI\",\"iid\":\"99784448-db20-45c7-8a1d-391ef70ed23a.sarees\",\"ct\":\"TRENDING\",\"p\":7,\"rid\":\"99784448-db20-45c7-8a1d-391ef70ed23a\",\"sid\":\"sarees\",\"f\":true,\"st\":1707826770083,\"pl\":94,\"pv\":100,\"t\":1707826810696},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mo\",\"ua\":5,\"t\":1707826813340}]}", 
		LAST);

	web_custom_request("autosuggest_4", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"mo\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826813369,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_12", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826813452}]}", 
		LAST);

	web_custom_request("autosuggest_5", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"mobi\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826813868,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_13", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826813961}]}", 
		LAST);

	web_custom_request("autosuggest_6", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"mobiles\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826814557,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_14", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826814647}]}", 
		LAST);

	web_custom_request("business_15", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707826813601,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":2,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.7RG9A42948N0\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"s\",\"wps\":2,\"pid\":null,\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770087,\"pv\":100,\"f\":false},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobi\",\"ua\":5,\"t\":1707826813849},"
		"{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobiles\",\"ua\":5,\"t\":1707826814550},{\"ev\":[{\"name\":\"FCP\",\"value\":9813},{\"name\":\"TTFB\",\"value\":8620},{\"name\":\"LCP\",\"value\":9899},{\"name\":\"FID\",\"value\":1722}],\"nm\":\"batman-web-vitals\",\"en\":\"AE\",\"mt\":{\"platform\":\"web\",\"pageUri\":\"https://www.flipkart.com/\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/121.0.0.0 "
		"Safari/537.36 Edg/121.0.0.0\",\"language\":\"en\",\"reactVersion\":\"16.9.0\",\"radio\":\"4g\"},\"t\":1707826814581},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.mobiles 5g|Mobiles\",\"ct\":\"RECENT\",\"p\":1,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"mobiles 5g|Mobiles\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815670},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.mobiles|Mobiles\",\"ct\":\"RECENT\",\"p\":2,\"rid\":\""
		"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"mobiles|Mobiles\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815670},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.vivo mobiles 5g\",\"ct\":\"RECENT\",\"p\":3,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"vivo mobiles 5g\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.mobile phone\",\"ct\":\"RECENT\",\"p\":4"
		",\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"mobile phone\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.oppo mobile 5g\",\"ct\":\"RECENT\",\"p\":5,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"oppo mobile 5g\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.mobile stand\",\"ct\":\"RECENT\","
		"\"p\":6,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"mobile stand\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.mobiles 2024\",\"ct\":\"RECENT\",\"p\":7,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"mobiles 2024\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671},{\"en\":\"SOI\",\"iid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69.poco x6 pro\",\"ct\":\"RECENT\""
		",\"p\":8,\"rid\":\"6f6db1d1-7342-4d7f-9d44-a53a45543b69\",\"sid\":\"poco x6 pro\",\"f\":true,\"st\":1707826770084,\"pl\":91,\"pv\":100,\"t\":1707826815671}]}", 
		LAST);

	lr_think_time(5);

	web_custom_request("autosuggest_7", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"mobiles5\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826822056,\"searchBrowseHistory\":[]}", 
		LAST);

	web_add_cookie("S=d1t17Py4EAiw/P1M/GT88P2c/P26j9ANQN/L893VucQPId187ToiOAIIviLg1Kdq+YSTXMd9McP0OHKdEEtvpDabsdg==; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_16", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707826816640,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":3,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.85UJDY9U0SR2\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"AC-HPW7-APPnDT-BASE\",\"wps\":2,\"pid\":\"ACNGSRFD7WGJBPH5\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770086,\"pv\":100,\"f\":false},{\"t\":1707826819639,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":4,\"wvt\":\""
		"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.JH98VFEFZMTI\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"App\",\"wps\":2,\"pid\":\"PRNGX7PZ8WJYUCUH\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770086,\"pv\":100,\"f\":false},{\"en\":"
		"\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobiles5\",\"ua\":5,\"t\":1707826822033}]}", 
		LAST);

	web_custom_request("business_17", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826822134}]}", 
		LAST);

	web_custom_request("business_18", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"t\":1707826822672,\"en\":\"DCI\",\"_ev\":\"3.1\",\"p\":1,\"wvt\":\"RICH_CAROUSEL_CENTER_CYCLIC_DOTS_ON_CONTENT\",\"wtp\":\"bannerads\",\"wtl\":null,\"mid\":\"neo/"
		"merchandising\",\"wc\":\"PINNED\",\"iid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2.BW2NFVQPU0EC\",\"biid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"ct\":\"bannerAdCard\",\"ctl\":\"Cat_Mob_HPW_MB Intirigue\",\"wps\":2,\"pid\":\"MOBGWH8SRNNZZ3DZ\",\"piid\":\"M_ad417e9c-0826-4b8c-a2d9-bcee1988fe29_2\",\"pbiid\":\"ad417e9c-0826-4b8c-a2d9-bcee1988fe29\",\"uvi\":1773481116,\"st\":1707826770082,\"pv\":100,\"f\":false}]}", 
		LAST);

	web_custom_request("autosuggest_8", 
		"URL=https://2.rome.api.flipkart.com/api/4/discover/autosuggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"query\":\"mobiles5g\",\"contextUri\":\"/\",\"marketPlaceId\":\"FLIPKART\",\"types\":[\"QUERY\",\"QUERY_STORE\",\"PRODUCT\",\"RICH\",\"PARTITION\"],\"rows\":10,\"zeroPrefixHistory\":false,\"userTimeStamp\":1707826823619,\"searchBrowseHistory\":[]}", 
		LAST);

	web_custom_request("business_19", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV"
		"|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|3Jw9yhv5GVL9GNHb4fvj8e|e3a195d0|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826823709}]}", 
		LAST);

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=2.rome.api.flipkart.com");

	web_custom_request("business_20", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.mobiles5g|Mobiles\",\"ct\":\"RECENT\",\"p\":1,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\""
		"mobiles5g|Mobiles\",\"f\":true,\"st\":1707826770082,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.mobiles5000\",\"ct\":\"RECENT\",\"p\":2,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"mobiles5000\",\"f\":true,\"st\":1707826770082,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.motorola g73 mobiles5g\",\"ct\":\"RECENT\",\"p\":3,\"rid\":\""
		"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"motorola g73 mobiles5g\",\"f\":true,\"st\":1707826770082,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.motorola g84 mobiles5g\",\"ct\":\"RECENT\",\"p\":4,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"motorola g84 mobiles5g\",\"f\":true,\"st\":1707826770082,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.vivo mobiles5g\",\""
		"ct\":\"RECENT\",\"p\":5,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"vivo mobiles5g\",\"f\":true,\"st\":1707826770082,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.motorola g71 mobiles5g\",\"ct\":\"RECENT\",\"p\":6,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"motorola g71 mobiles5g\",\"f\":true,\"st\":1707826770083,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\""
		"4159956e-0ced-40d7-9b5c-c0e699814f17.motorola g54 mobiles5g\",\"ct\":\"RECENT\",\"p\":7,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"motorola g54 mobiles5g\",\"f\":true,\"st\":1707826770083,\"pl\":79,\"pv\":100,\"t\":1707826823167},{\"en\":\"SOI\",\"iid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17.motorola g62 mobiles5g\",\"ct\":\"RECENT\",\"p\":8,\"rid\":\"4159956e-0ced-40d7-9b5c-c0e699814f17\",\"sid\":\"motorola g62 mobiles5g\",\"f\":true,\"st\":1707826770083,\"pl\":79,\"pv\":100,\"t\""
		":1707826823167},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobiles5g\",\"ua\":5,\"t\":1707826823588},{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobiles5g\",\"ua\":2,\"t\":1707826824467}]}", 
		LAST);

	web_custom_request("business_21", 
		"URL=https://2.rome.api.flipkart.com/api/4/data/collector/business", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"nc\":{\"iid\":\"y0sxclq6vk000000\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.51.23.165\"}}},\"ssid\":\"1707827326642\",\"ppt\":\"None\",\"ppn\":\"None\"},\"e\":[{\"en\":\"TIE\",\"tp\":\"search_autosuggest\",\"iid\":\"z8ico6eabk000000\",\"te\":\"mobiles5g\",\"ua\":4,\"t\":1707826824487}]}", 
		LAST);

	web_add_cookie("vh=606; DOMAIN=www.flipkart.com");

	web_add_cookie("vw=1272; DOMAIN=www.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=www.flipkart.com");

	web_add_cookie("fonts-loaded=en_loaded; DOMAIN=www.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=www.flipkart.com");

	web_add_cookie("isH2EnabledBandwidth=true; DOMAIN=www.flipkart.com");

	web_add_cookie("h2NetworkBandwidth=9; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCVS_17EB401053DAF4840A490D4C%40AdobeOrg=1; DOMAIN=www.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767%7CMCMID%7C64661683922883419631748055552660139383%7CMCAAMLH-1708431581%7C12%7CMCAAMB-1708431581%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1707833981s%7CNONE%7CMCAID%7CNONE; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn=HomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("gpv_pn_t=FLIPKART%3AHomePage; DOMAIN=www.flipkart.com");

	web_add_cookie("pxcts=711478f1-ca6b-11ee-b534-aafce86b5791; DOMAIN=www.flipkart.com");

	web_add_cookie("_pxvid=71146fe0-ca6b-11ee-b534-69cb5dc59218; DOMAIN=www.flipkart.com");

	web_add_cookie("_px3=2df9703546500bc7e69fa8a6127e27dedfb4a2c7d69eef87b46c7b371d03bf51:ZUmqk4oCu+9ceYHEMTvF9rVxbC7T6QV/jtD6iiHdgsivfN3k3Bxq2TuryOLrN5cvIBJiQ12l+Kbsdddi71x9QQ==:1000:vBXOhbhC6n/EaNEcHmG2tll9ab0cD/Nx+5UacK0m9sUt5/WMxBDDgy3YFhTZ/iArMoXprpW57Q7hBVg2krcKFvB+FWm6PGObNpBw2tNVONVhzSTn5ikiqoNPbbh/URoKwPw/4zAE2n6ilLtu4IVuQ5zItyUagDOlkz3qCC/WlsW8mwQ7s6U7yhvKiv7PS1AA8rNgWNg1bk6hZWUS3jOWrguJUYxioeOzuuAQUU6vTrM=; DOMAIN=www.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=www.flipkart.com");

	web_url("search", 
		"URL=https://www.flipkart.com/search?q=mobiles5g&otracker=search&otracker1=search&marketplace=FLIPKART&as-show=on&as=off", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("callback", 
		"URL=https://2.rome.api.flipkart.com/api/1/connekt/push/callback", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("callback_2", 
		"URL=https://2.rome.api.flipkart.com/api/1/connekt/push/callback", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"type\":\"PN\",\"eventType\":\"TICKLE\",\"cargo\":\"{\\\"permissionStatus\\\":\\\"default\\\"}\"}", 
		LAST);

	web_custom_request("fdp", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fdp_2", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("fdp_3", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"pbi41fhk5s0000001707826828109\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.52.9.250\"}}},\"ssid\":\"qzkqkznyyo0000001707826828109\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"RI\",\"fid\":\"05jmppr65s0000001707826828230\",\"rid\":\"f3485ac4-ca1a-4967-8fa8-0bfbdfdab547\",\"tp\":\"product\",\"t\""
		":1707826828230}]}]", 
		LAST);

	web_custom_request("fdp_4", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"pbi41fhk5s0000001707826828109\",\"fm\":\"organic\",\"mpid\":\"FLIPKART\",\"pn\":\"homepage\",\"pt\":\"hp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.52.9.250\"}}},\"ssid\":\"qzkqkznyyo0000001707826828109\",\"ppt\":\"hp\",\"ppn\":\"homepage\"},\"e\":[{\"en\":\"RI\",\"fid\":\"q8ol2mzxog0000001707826828232\",\"rid\":\"505280dd-8963-4aa6-8d14-3fc5417f8145\",\"tp\":\"product\",\"t\""
		":1707826828232},{\"en\":\"RI\",\"fid\":\"u1lmhq9jq80000001707826828232\",\"rid\":\"a78631d0-c472-4779-a834-7669078314d2\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"j8taab2wg00000001707826828232\",\"rid\":\"046adb88-48fb-43d5-b56c-a4f1affdeab6\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"pvmtrwrcy80000001707826828232\",\"rid\":\"2352b4ab-e689-4505-bcd7-f14295435cf8\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\""
		"dey687doow0000001707826828232\",\"rid\":\"2ea22905-8c3f-4e2a-8b5a-782f6482e4a6\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"wlygt29chc0000001707826828232\",\"rid\":\"0d8b69ee-190a-4d88-b71d-e151c5042ef4\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"yy4m3aswkg0000001707826828232\",\"rid\":\"3d591292-ba60-46fd-8633-da2310fbd064\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"q1em5v2ti80000001707826828232\",\"rid\":\""
		"b72e5303-730f-4316-8a25-c0fb99219b11\",\"tp\":\"product\",\"t\":1707826828232},{\"en\":\"RI\",\"fid\":\"r6y1gbfmxs0000001707826828232\",\"rid\":\"cce13340-707d-4147-9156-660010b29386\",\"tp\":\"product\",\"t\":1707826828232}]}]", 
		LAST);

	web_custom_request("fdp_5", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"pbi41fhk5s0000001707826828109\",\"fm\":\"Search\",\"mpid\":\"FLIPKART\",\"pn\":\"sp\",\"pt\":\"sp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.52.9.250\"}}},\"ssid\":\"qzkqkznyyo0000001707826828109\",\"ppt\":\"hp\",\"ppn\":\"homepage\",\"ss\":\"BrowsePageContext\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"abId\":\"STG|5U8IEnotyxMPqplfT8XRP7|98ddb490|h\"},{\"abId\":\"STG|5PQY1WIBKomcdDb2IdYNgT"
		"|7d263909|h\"},{\"abId\":\"STG|5FTlluaIGdFsBfIWqBbiYV|3f00e2fe|h\"},{\"abId\":\"STG|5TbrJfLRCDupZkAqEnGrWB|d9fdc143|h\"},{\"abId\":\"STG|5V12BMwajmWjBsgBngtU2o|8b553aac|h\"},{\"abId\":\"STG|5MPSfqRizElG8vUwxbeImp|aca8e044|h\"},{\"abId\":\"STG|5HPQfgX9m7L7tQMx6g5xgM|f3c864b6|h\"},{\"abId\":\"STG|5H14MBrQ52MJY5ZjhzT2Wl|ea06eb0b|h\"},{\"abId\":\"STG|5Nikd6w0Lgz4pRTBEJb3Jj|9244d821|h\"},{\"abId\":\"STG|5O2q0f25OC7SZ2n4uwC42L|1a4d6cfa|h\"},{\"abId\":\"STG|5QKC8mpMdwsHwl6HT5k6nh|d0c48779|h\"},{\"abId\""
		":\"STG|5IHkk2yDS1ga6aW3QIho1R|6b46eef8|h\"},{\"abId\":\"STG|5RPYzE3D95pnx1QHxqoUhL|26d47ff3|h\"},{\"abId\":\"STG|5PKPzgUuEeTLEzaFz1O0Cp|78399a84|h\"},{\"abId\":\"STG|7BNXMbU5fdWEFMK7g8nkJ3|70afd4ff|h\"},{\"abId\":\"STG|5SHwYrigyBe6gSywSaoL9T|8d2086ff|h\"},{\"abId\":\"STG|5LCLUe04XGXedAVmXV0SIY|629a79e0|h\"},{\"abId\":\"STG|5VQviXigFgthEZa0v7L7Bn|010a5b10|h\"},{\"abId\":\"STG|5KoH2h2ioYXSm178H62AnL|61fb66ea|h\"},{\"abId\":\"STG|5Jyosr4XlRCVZFgnzjAbxj|156f060b|h\"}],\"t\":1707826828507}]}]", 
		LAST);

	web_custom_request("fdp_6", 
		"URL=https://2.rome.api.flipkart.com/api/1/fdp", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.flipkart.com/", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"nc\":{\"iid\":\"pbi41fhk5s0000001707826828109\",\"fm\":\"Search\",\"mpid\":\"FLIPKART\",\"pn\":\"sp\",\"pt\":\"sp\",\"meta\":{\"sMode\":\"BLUE\",\"loc\":{\"ipInfo\":{\"country\":\"India\",\"state\":\"Karnataka\",\"city\":\"Bengaluru\",\"ip\":\"10.52.9.250\"}}},\"ssid\":\"qzkqkznyyo0000001707826828109\",\"ppt\":\"hp\",\"ppn\":\"homepage\",\"ss\":\"BrowsePageContext\"},\"e\":[{\"en\":\"ABE\",\"abi\":[{\"value\":true,\"abId\":\"STG|launchedGroup|bee87c24|h\",\"expId\":\""
		"oneviewhomepagedesktop\"}],\"t\":1707826828478}]}]", 
		LAST);

	lr_think_time(4);

	web_custom_request("1.0", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x033.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xC2\\x83\\xEC\\xAF\\xC5\\xA3\\x96\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01i\\x0CVMware, Inc.\\x89\tVMware7,1\\x00\\xCB\\x16\n\\x01I&c:f942ef10-0fd7-43ef-8c7b-f5457525d38a\\x00\\xCB\\x17\n\\x01I&r:fe33dc3a-81da-4f97-9036-ec726bc47d96\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:000640cc1d0b11d4c51562216c85233d099400000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/02/07:21:42:47!3aab62!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$F34F0A1F-2BA5-43C6-8E87-E72008408B14q\n\\x89$AED71DAC-6AF4-4DDB-9016-03C54EFFA0F7\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1B\r"
		"AdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x08Ethernet\\x00\\x0FCorrelationGuid\\x00\tDNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x01\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\x90\\xD1\\xE2\\xBF\n\\x00\tTimestampi\\x182024-02-13T12:19:36.650Z\\x00\tclient_id0\\x00\\x91\\xC1\\xD5\\xB0\\xB6\\xA3\\xC5\\xB7\\xA0\\xC0\\x01\\x00\\x04muidi 3FB288A77D7E6FC13A379A107C2C6E33\\x00\rnavigationUrlighttps://ntp.msn.com/edge/ntp?locale=en-US&title=New%20tab&dsp=1&sp=Bing&startpage=1&PC=U531&prerender=1\\x00\\x17navigationUrlRejectCode0\\x00\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I=Microsoft.WebBrowser.Personalization.SAN.PreferenceSanConsentq\\xC2\\x83\\xEC\\xAF\\xC5\\xA3\\x96\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01i\\x0CVMware, Inc.\\x89\tVMware7,1\\x00\\xCB\\x16\n\\x01I&c:f942ef10-0fd7-43ef-8c7b-f5457525d38a\\x00\\xCB\\x17"
		"\n\\x01I&r:fe33dc3a-81da-4f97-9036-ec726bc47d96\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:000640cc1d0b11d4c51562216c85233d099400000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/02/07:21:42:47!3aab62!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$F34F0A1F-2BA5-43C6-8E87-E72008408B14q\\x08\\x89$AED71DAC-6AF4-4DDB-9016-03C54EFFA0F7\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x08Ethernet\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\nSanConsent0\\x0C\\x91\\x02\\x00\tTimestampi\\x182024-02-13T12:19:29.709Z\\x00\tclient_id0\\x00\\x91\\xC1\\xD5\\xB0\\xB6\\xA3\\xC5\\xB7\\xA0\\xC0\\x01\\x00\\x04muidi "
		"3FB288A77D7E6FC13A379A107C2C6E33\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0I4Microsoft.WebBrowser.Personalization.SAN.BrowserInfoq\\xC2\\x83\\xEC\\xAF\\xC5\\xA3\\x96\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01i\\x0CVMware, Inc.\\x89\tVMware7,1\\x00\\xCB\\x16\n\\x01I&c:f942ef10-0fd7-43ef-8c7b-f5457525d38a\\x00\\xCB\\x17\n\\x01I&r"
		":fe33dc3a-81da-4f97-9036-ec726bc47d96\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:000640cc1d0b11d4c51562216c85233d099400000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/02/07:21:42:47!3aab62!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$F34F0A1F-2BA5-43C6-8E87-E72008408B14q\\x06\\x89$AED71DAC-6AF4-4DDB-9016-03C54EFFA0F7\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x08Ethernet\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x08Languagei\\x05en-US\\x00\tTimestampi\\x182024-02-13T12:19:29.709Z\\x00\tclient_id0\\x00\\x91\\xC1\\xD5\\xB0\\xB6\\xA3\\xC5\\xB7\\xA0\\xC0\\x01\\x00\\x04muidi "
		"3FB288A77D7E6FC13A379A107C2C6E33\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IOMicrosoft.WebBrowser.Personalization.SAN.PreferenceDefaultSearchProviderCurrentq\\xC2\\x83\\xEC\\xAF\\xC5\\xA3\\x96\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01i\\x0CVMware, Inc.\\x89\tVMware7,1\\x00\\xCB\\x16\n\\x01I&c:f942ef10-0fd7-43ef-8c7b-f5457525d38a\\x00\\xCB\\x17\n\\x01I&r"
		":fe33dc3a-81da-4f97-9036-ec726bc47d96\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:000640cc1d0b11d4c51562216c85233d099400000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/02/07:21:42:47!3aab62!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$F34F0A1F-2BA5-43C6-8E87-E72008408B14q\\x04\\x89$AED71DAC-6AF4-4DDB-9016-03C54EFFA0F7\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0B\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x08Ethernet\\x00\\x14DSPCurrentRejectCode0\\x00\\x00\rDSPCurrentUrliU{bing:baseURL}search?q={searchTerms}&{bing:cvid}{bing:msb}{google:assistedQueryStats}\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tTimestampi\\x182024-02-13T12:19"
		":29.709Z\\x00\tclient_id0\\x00\\x91\\xC1\\xD5\\xB0\\xB6\\xA3\\xC5\\xB7\\xA0\\xC0\\x01\\x00\\x04muidi 3FB288A77D7E6FC13A379A107C2C6E33\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x033.0IBMicrosoft.WebBrowser.Personalization.SAN.PreferenceHomepageCurrentq\\xC2\\x83\\xEC\\xAF\\xC5\\xA3\\x96\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01i\\x0CVMware, Inc.\\x89\tVMware7,"
		"1\\x00\\xCB\\x16\n\\x01I&c:f942ef10-0fd7-43ef-8c7b-f5457525d38a\\x00\\xCB\\x17\n\\x01I&r:fe33dc3a-81da-4f97-9036-ec726bc47d96\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:000640cc1d0b11d4c51562216c85233d099400000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/02/07:21:42:47!3aab62!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)"
		"\\x1CEVT-Windows-C++-No-3.5.131.1I$F34F0A1F-2BA5-43C6-8E87-E72008408B14q\\x02\\x89$AED71DAC-6AF4-4DDB-9016-03C54EFFA0F7\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x08Ethernet\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x19HomepageCurrentRejectCode0\\x00\\x91\\xD6\\x01\\x00\\x12HomepageCurrentUrl\\x00\tTimestampi\\x182024-02-13T12:19:29.703Z\\x00\t"
		"client_id0\\x00\\x91\\xC1\\xD5\\xB0\\xB6\\xA3\\xC5\\xB7\\xA0\\xC0\\x01\\x00\\x04muidi 3FB288A77D7E6FC13A379A107C2C6E33\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	return 0;
}