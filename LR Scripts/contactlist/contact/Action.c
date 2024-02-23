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

	

	

	web_set_sockets_option("TLS_SNI", "0");

	web_add_cookie("vh=606; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("vw=1272; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("dpr=1; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("AMCV_17EB401053DAF4840A490D4C%40AdobeOrg=-227196251%7CMCIDTS%7C19767; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("Network-Type=4g; DOMAIN=2.rome.api.flipkart.com");

	

	

	web_set_sockets_option("TLS_SNI", "1");

	

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

	
	lr_think_time(26);

	

	
		
	
	
	web_add_cookie("S=d1t17Py4EAiw/P1M/GT88P2c/P26j9ANQN/L893VucQPId187ToiOAIIviLg1Kdq+YSTXMd9McP0OHKdEEtvpDabsdg==; DOMAIN=2.rome.api.flipkart.com");

	web_add_cookie("s_sq=flipkart-prd%3D%2526pid%253DHomePage%2526pidt%253D1%2526oid%253DSearch%252520Icon%2526oidt%253D3%2526ot%253DSUBMIT; DOMAIN=2.rome.api.flipkart.com");

	
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

	lr_think_time(4);

	

	return 0;
}