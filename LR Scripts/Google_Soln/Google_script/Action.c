Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=121", 
		"Resource=1", 
		"RecContentType=application/x-gzip", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQn11VQ7sgCk8RIFDWlIR0chrbMLunyG1js=", 
		"URL=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTIxLjAuNjE2Ny4xNDASGQn11VQ7sgCk8RIFDWlIR0chrbMLunyG1js=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	lr_think_time(6);

	web_url("4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", 
		"URL=https://fonts.gstatic.com/s/googlesans/v14/4UaGrENHsxJlGDuGo1OIlL3Owp4.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.google.com/", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_cookie("1P_JAR=2024-02-07-09; DOMAIN=id.google.com");

	web_add_cookie("AEC=Ae3NU9PYjGOdSZV5YoILtjir4JDk78ml1fIMOSwGI20kR3V1eIzrU99N5Sg; DOMAIN=id.google.com");

	web_add_cookie("NID=511=HKe-_dV0yQGaLprwZoJ4r4t0XQHPItqfItFrm9--905HEAGHTkOgaeUP2lV6r9f8M0Ls-dZwrMQxfe4gc4pGiyWLyATGRWo3p8MERjAS9gunZ0NnZzZoZNwdpunQmU5GDyp4cik97Uq5Q8D0OAk76hAybhA_PUbkYxDzqhhW1p_x7JoOFqz7x3s; DOMAIN=id.google.com");

	web_url("ANsg4T7QMqxWQ5lSOuccOwuO4gZf537BZrQLRmP0qbnEm8GdBtvx7lMd8UFUorTyZ9ajBmxMaDpg8W9gtGywsKBUDHf_nQTrZfVRZ1MrN4PC5CsirDpA", 
		"URL=https://id.google.com/verify/ANsg4T7QMqxWQ5lSOuccOwuO4gZf537BZrQLRmP0qbnEm8GdBtvx7lMd8UFUorTyZ9ajBmxMaDpg8W9gtGywsKBUDHf_nQTrZfVRZ1MrN4PC5CsirDpA", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t9.inf", 
		LAST);

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*'\\x12\\x04\\x08\\x00\\x10\\x00\\x18\\x012\\x04\\x08\\xDE\\xD8\\x122\\x13\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01@\\x00H\\x07:%z00000157-2da7-5740-0000-000057da890cR\\x18\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\x9A\\xB7\t\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel"
		"(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=I76XEoEoSqxhEjiZ7akd2w%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x17sambismart005@gmail.com\\x10c\\x18\\x02*\\x8F\\x03\\x12\\x04\\x08\\x00\\x10\\x01\\x18\\x012\"\\x08\\xDE\\xD8\\x12\\x12\\x0C \\x00x\\x00\\x80\\x01\\x93\\xC1\\x80\\x98\\xD81*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\x9A\\xB7\t\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_di\\x12\\x0551!di\\x1A\\x12\tN\\xA7\\xFC\\xE3\\xB3\\x10\\x06\\x00\\x11N\\xA7\\xFC\\xE3\\xB3\\x10\\x06\\x00)Y\\xB4\\xFD\\xE3\\xB3\\x10\\x06\\x00\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80;1\\xDF\\xB3\\x10\\x06\\x00\\x11\\x80;1\\xDF\\xB3\\x10\\x06\\x00)\\x1E\\xA5\\xFC\\xE3\\xB3\\x10\\x06\\x000\\x80\\xF7\\xC4\\xF9\\xBD\\x96\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x000\\x008\\x00@\\x002\\x99\\x01\\x08\\xFC\\xDE$\\x12\\x82\\x01 \\x00\\x92\\x01}\n4\n\\x0Echrome_sync_st\\x12\\x0551!st\\x1A\\x12\tN\\xA7\\xFC\\xE3\\xB3\\x10\\x06\\x00\\x11N\\xA7\\xFC\\xE3\\xB3\\x10\\x06\\x00)\\x91\\xB4\\xFD\\xE3\\xB3\\x10\\x06\\x00\nE\n"
		"\\x16annotation_chrome_sync\\x12\\x0551!bd\\x1A\\x12\t\\x80;1\\xDF\\xB3\\x10\\x06\\x00\\x11\\x80;1\\xDF\\xB3\\x10\\x06\\x00)\\x1E\\xA5\\xFC\\xE3\\xB3\\x10\\x06\\x000\\x80\\xF7\\xC4\\xF9\\xBD\\x96\\x84\\x03*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x002#\\x08\\x81\\xF5\\x02\\x12\r \\x00\\x88\\x01\\xCF\\xCF\\x80\\x83\\x92\\xCD\\xD4\\xB4\\x01*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x000\\x008\\x00@\\x00@\\x00H\\x0CP\\x00:%z00000157-2da7-5740-0000-000057da890cR\\x16\n"
		"\\x0E\\x12\\x0C8\\x00@\\x00R\\x04\\x08\\x00\\x10\\x00`\\x07\\x10\\x01\\x18\\x00 \\x00Z\\x81\\x01\n\\x7F\\x12}Chrome WIN 121.0.6167.140 (a5856993c61543d4acbee5f848f1750607e87ba0-refs/branch-heads/6167@{#1684}) channel(stable),gzip(gfe)b'AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgwj\\x02\\x10\\x00", 
		LAST);

	web_concurrent_start(NULL);

	web_url("shopping", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcTYuftbQoUseoVKxmeo7DmUznz7rGShEJrdrV9v0a2FnqOi2orTCihiz_WVRDu9n_UPZEcA4AEdjLJTxxdeBhhk2WuME2jgbszFBLdI1gXadVGNpjP8bmzH-w", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("shopping_2", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcRV2ET9fyNVHS2vqGfjNdnGvvBR7br9ijfDeYF_FyWBrZgJm2WZLNdnw1ukgLFpRJ_pxVdVEPf4R81-HZrj2pIyvVA7ZprnRnygmdS9KBAdiodGRtJIFb1d", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("shopping_3", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcTUTfLGJ37zo_nc_nbhfaM7qKdhzsxd7Xk6bakdEXqzHZluIikEpG_xj09_Mv14rVriWjj78FHNeApfrpFK0x1EhtHiEUPfrwk1_F2Ytn96c02OY1CL3-PO", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t14.inf", 
		LAST);

	web_url("shopping_4", 
		"URL=https://encrypted-tbn3.gstatic.com/shopping?q=tbn:ANd9GcSrkwmDpYmukvPFpP_rBzeszpWhhQDiZaKkloz_lFE_Z5IVlAlD45hwF-fjIZPTeVhVVI6mxmiJ_PnsjL7BVpgaY-T3tsIpfoI-uqEgi8nKiS3KETQtSO_K8Q", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("shopping_5", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcQAdPyS7y7wJsRY8wHCioYa-1lbUHu4T3EWKRLJhI2FYxIFe7R0bKHqe16jnetEgj1O2M2s0D2lnmcrNaepLlkpMDZRlHUvwYCOV2Dii0RnOWbFooUyFxuLHQ", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("shopping_6", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcSuxFPnhAXyca4JwBnk1jAkZWiZ5jOOS2JcrYpx_hxDUU5FvhcGOtfPVtaLKjcxdcBsDusZTz4iBWibEMj5P_7WXouzzNRpTlMy6jn8Y97jNk6G4XsQPN1L", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("shopping_7", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcS9qFONkun2ud41UU2V0cQTj4XRQ9foL4MmiSDes9vB5Vtbc6VNf0uQVVw8A4xmCc01pfVEZ-v7rDthFmKi97m8JVL0v2hdjVHYO2hiyyA9RcPxJZRpq1ha", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t18.inf", 
		LAST);

	web_url("shopping_8", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcQgeNboOGTxBkJ_6MG8Djd6zcTK0pFLTtM5rzPEOFi1HXVjRWaTaceHGJl2wmjgPf4WsSrfs9oFTqC0s0Ml_IjvlrNBQq0hjC9fhejqqkkDnTywUSrfz9cW", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t19.inf", 
		LAST);

	web_url("shopping_9", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcQ7xg6V0VpS7yqCscrggFJunl-7YW9VNR2lHHYY6WAwxUcaOYqiw8mTNeW67agVeVuPXcpqY5943ZmqGR5x1v3SqiNXBJlNwQDZImxTnQXsA53X2fJIZxU4", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("shopping_10", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcRYGp0ixO9GZ7RMnKkgqIZ8vLuu1oCgXLkIVeYBOCWoFd5aphLn8Q1SljvxkYdW2de9NKeE39pbdjeAg8k-mAZVdUNNi3v7kGbx9nbHHNM", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t21.inf", 
		LAST);

	web_url("shopping_11", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcSlwA76_8oywJMzH7ceJblvZRqwgGw6nx-HUJRDexKcsEgSmw2GRe57S-yiCFSMTHyYOvr1KEiiV7Nre58A0lUZ2uK2XojaDiDpd_arFK0", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t22.inf", 
		LAST);

	web_url("shopping_12", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcTwl4W2FR8mlvpHqzoxJ_Lpr4v1-AlDt8gbDGgfFx5CZMzv9okAzTtM1G86sYBlLirwzIm1ORGYSjNQWHOvRO6lik0hw9_FeQpUuMbi--BbbFFDKf3SadKK", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("shopping_13", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcQh1Dyu6Y3GWSVBG1xwq4CLTkMoYbv2CYiA3qnDW03M3-BTwJSLUS54LrdMyeAbqvXKnBRJsVU19Y3tvt5LGb6EKVs4SV0O5iSrXLtP3pxvHbfxNlkeh_ij", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("shopping_14", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcT__-rQVuXZifm1lC5kRP4u5W1tXkF98vCHXuuA4vNdodwvqOUbQn6Z-CgID3euuTEpmtz9vCirUEnxrDD5Vsa01SNY-K6sK-SOdyxNbMM", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("shopping_15", 
		"URL=https://encrypted-tbn2.gstatic.com/shopping?q=tbn:ANd9GcTbtZOp9bXJ683SdN7qKkuDcw1prOSmrz_PW14TKKRAw2NtiwcMqVbcg2dyyg92Ril100yBMaE15J77UtKFoqtDHkJOUtUu-gn46A0beTKF84A-tLOIVJM", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("shopping_16", 
		"URL=https://encrypted-tbn1.gstatic.com/shopping?q=tbn:ANd9GcRJE-Lc2R3xf74BjZzMFXkgQQUfP2HWn9SJlegpoyocehba_u4WEYLmGBTfIw9jgyZyKCJdUAeEMN--EebHJia2wNz4ecJ654bPQKbSeq7Xg0LipUMz78O4KA", 
		"Resource=1", 
		"RecContentType=image/webp", 
		"Referer=https://www.google.com/", 
		"Snapshot=t27.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	lr_think_time(34);

	web_url("laptops-tablets.html", 
		"URL=https://www.hp.com/in-en/shop/laptops-tablets.html?price=40000-50000&gad_source=1&gclid=EAIaIQobChMIr4_-wvuYhAMVWKVmAh2regiBEAAYASABEgI65vD_BwE&gclsrc=aw.ds", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("EfRTk", 
		"URL=https://www.hp.com/xGQkKIC3NtdX/jq3xaR/U_AsFp/EaiOhpVmm2/BS8eYThxBg/VywXCX/EfRTk", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/in-en/shop/laptops-tablets.html?price=40000-50000&gad_source=1&gclid=EAIaIQobChMIr4_-wvuYhAMVWKVmAh2regiBEAAYASABEgI65vD_BwE&gclsrc=aw.ds", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("YJ2XX-MFTTM-QC8YL-NJ6NC-DHH57", 
		"URL=https://s.go-mpulse.net/boomerang/YJ2XX-MFTTM-QC8YL-NJ6NC-DHH57", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t30.inf", 
		LAST);

	web_url(";ID=169583;size=0x0;setID=570360;type=js;referrer=https%3A%2F%2Fwww.hp.com%2Fin-en%2Fshop%2Flaptops-tablets.html%3Fprice%3D40000-50000%26gad_source%3D1%26gclid%3DEAIaIQobChMIr4_-wvuYhAMVWKVmAh2regiBEAAYASABEgI65vD_BwE%26gclsrc%3Daw.ds;sw=1280;sh=720;spr=1;", 
		"URL=https://servedbyadbutler.com/adserve/;ID=169583;size=0x0;setID=570360;type=js;referrer=https%3A%2F%2Fwww.hp.com%2Fin-en%2Fshop%2Flaptops-tablets.html%3Fprice%3D40000-50000%26gad_source%3D1%26gclid%3DEAIaIQobChMIr4_-wvuYhAMVWKVmAh2regiBEAAYASABEgI65vD_BwE%26gclsrc%3Daw.ds;sw=1280;sh=720;spr=1;kw=in-en,Laptops,websiteCode-base;pid=2984283;place=0;rnd=2984283;click=CLICK_MACRO_PLACEHOLDER", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("bv.js", 
		"URL=https://apps.bazaarvoice.com/deployments/hpshopping-in/main_site/production/en_IN/bv.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("gtm.js", 
		"URL=https://www.googletagmanager.com/gtm.js?id=GTM-NSSSFFL", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("jquery.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("common.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/common.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("dataPost.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/dataPost.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("bootstrap.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("app.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/core/app.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("form-key-provider.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_PageCache/js/form-key-provider.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t39.inf", 
		LAST);

	web_url("mage-translation-dictionary.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Translation/js/mage-translation-dictionary.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t40.inf", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Theme/js/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("stellar-global.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/js/stellar-global.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("domReady.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/requirejs/domReady.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("jquery-mixin.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_ReCaptchaWebapiUi/js/jquery-mixin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("template.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/template.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t45.inf", 
		LAST);

	web_url("confirm.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/modal/confirm.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t46.inf", 
		LAST);

	web_url("widget.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/jquery/ui-modules/widget.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("main.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/apply/main.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("bootstrap.min.js_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/knockout/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("types.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/core/renderer/types.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("layout.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/core/renderer/layout.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "0");

	web_set_sockets_option("TLS_SNI", "1");

	web_set_sockets_option("TLS_SNI", "0");

	web_url("config.json", 
		"URL=https://c.go-mpulse.net/api/config.json?key=YJ2XX-MFTTM-QC8YL-NJ6NC-DHH57&d=www.hp.com&t=5690997&v=1.766.0&sl=0&si=97659fee-7680-4237-8202-c45c3ff1bbae-s8hcib&plugins=AK,ConfigOverride,Continuity,PageParams,IFrameDelay,AutoXHR,SPA,History,Angular,Backbone,Ember,RT,CrossDomain,BW,PaintTiming,NavigationTiming,ResourceTiming,Memory,CACHE_RELOAD,Errors,TPAnalytics,UserTiming,Akamai,Early,EventTiming,LOGN&acao=&ak.ai=687787", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("wrapper.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/utils/wrapper.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_url("underscore.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/underscore.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t54.inf", 
		LAST);

	web_url("text.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/requirejs/text.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t55.inf", 
		LAST);

	web_url("smart-keyboard-handler.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/smart-keyboard-handler.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t56.inf", 
		LAST);

	web_url("mage.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/mage.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("escaper.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Security/js/escaper.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t58.inf", 
		LAST);

	web_url("escaper.min.js_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/HPOLS_Core/js/escaper.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t59.inf", 
		LAST);

	web_url("translate.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/translate.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t60.inf", 
		LAST);

	web_url("modal.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/modal/modal.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("css.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/PluginCompany_ContactForms/lib/require-css/css.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("icon_chevron_right_s.svg", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/images/icon/icon_chevron_right_s.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("FormaDJRMicro-Bold.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/fonts/FormaDJR/FormaDJRMicro-Bold.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("iconfont.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/fonts/hpIconfont/iconfont.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("FormaDJRMicro-Regular.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/fonts/FormaDJR/FormaDJRMicro-Regular.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("Luma-Icons.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/fonts/Luma-Icons.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t67.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("js-translation.json", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/js-translation.json", 
		"Method=OPTIONS", 
		"Resource=1", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t68.inf", 
		LAST);

	web_url("js-translation.json_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/js-translation.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	web_url("swiper-bundle.min.css", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Catalog/css/swiper-bundle.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t70.inf", 
		LAST);

	web_custom_request("modal-popup.html", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-popup.html", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_url("knockout.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/knockoutjs/knockout.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t72.inf", 
		LAST);

	web_custom_request("modal-slide.html", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-slide.html", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modal-popup.html_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-popup.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modal-slide.html_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-slide.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		LAST);

	web_url("knockout-es5.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/knockoutjs/knockout-es5.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t76.inf", 
		LAST);

	web_custom_request("modal-custom.html", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-custom.html", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_url("jquery.flexslider.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/HPOLS_Cms/js/jquery.flexslider.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("modal-custom.html_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/templates/modal/modal-custom.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("iconfont.woff2_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1706826464/frontend/HPOLS/stellar/en_US/fonts/iconfont/iconfont.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("version.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/jquery/ui-modules/version.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("scripts.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/apply/scripts.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("main.min.js_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/utils/main.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("registry.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/registry/registry.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("mu.js", 
		"URL=https://www.hp.com/cma/ng/lib/exceptions/mu.js", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=https://www.hp.com/in-en/shop/laptops-tablets.html?price=40000-50000&gad_source=1&gclid=EAIaIQobChMIr4_-wvuYhAMVWKVmAh2regiBEAAYASABEgI65vD_BwE&gclsrc=aw.ds", 
		"Snapshot=t85.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("a2129670914.html", 
		"URL=https://a2129670914.cdn.optimizely.com/client_storage/a2129670914.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("engine.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/knockout/template/engine.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("bootstrap.min.js_3", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/knockout/bindings/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("observable_array.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/knockout/extender/observable_array.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("bound-nodes.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/knockout/extender/bound-nodes.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("key-codes.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/key-codes.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("core.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/jquery/ui-modules/core.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("z-index.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/jquery/z-index.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("console-logger.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/logger/console-logger.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("swiper-bundle.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Catalog/js/view/swiper-bundle.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("icon_chevron_right_s.svg_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/images/icon/icon_chevron_right_s.svg", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("hpi-flag-in.png", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/images/worldmap/hpi-flag-in.png", 
		"Resource=1", 
		"RecContentType=image/avif", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("FormaDJRMicro-Bold.woff2_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/FormaDJR/FormaDJRMicro-Bold.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("iconfont.woff2_3", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/hpIconfont/iconfont.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("FormaDJRMicro-Regular.woff2_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/FormaDJR/FormaDJRMicro-Regular.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("iconfont.woff2_4", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/iconfont/iconfont.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t101.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("oeu1707299228114r0.5612377947471365", 
		"URL=https://tapi.optimizely.com/api/targeting/7794130212/18974061969/oeu1707299228114r0.5612377947471365", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Luma-Icons.woff2_2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/Luma-Icons.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-m.min.css", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("hpi-hf-icons.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/hpicons/hpi-hf-icons.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("contact_us.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Theme/js/contact_us.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("icomoon.woff2", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/fonts/icomoon/icomoon.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/css/styles-l.min.css", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("index.js", 
		"URL=https://unpkg.com/@adobe/magento-storefront-events-sdk@%5E1/dist/index.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("knockout-repeat.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/knockoutjs/knockout-repeat.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("knockout-fast-foreach.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/knockoutjs/knockout-fast-foreach.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("events.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/core/events.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("local.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/Magento_Ui/js/lib/core/storage/local.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t111.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("events", 
		"URL=https://logx.optimizely.com/v1/events", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"account_id\":\"2129670914\",\"anonymize_ip\":true,\"client_name\":\"js\",\"client_version\":\"0.193.0\",\"enrich_decisions\":true,\"project_id\":\"7794130212\",\"revision\":\"12538\",\"visitors\":[{\"visitor_id\":\"oeu1707299228114r0.5612377947471365\",\"session_id\":\"AUTO\",\"attributes\":[{\"e\":null,\"k\":\"\",\"t\":\"first_session\",\"v\":true},{\"e\":null,\"k\":\"\",\"t\":\"browserId\",\"v\":\"gc\"},{\"e\":null,\"k\":\"\",\"t\":\"device\",\"v\":\"desktop\"},{\"e\":null,\"k\":\"\",\""
		"t\":\"device_type\",\"v\":\"desktop_laptop\"},{\"e\":null,\"k\":\"\",\"t\":\"referrer\",\"v\":\"https://www.google.com/\"},{\"e\":null,\"k\":\"\",\"t\":\"source_type\",\"v\":\"campaign\"},{\"e\":null,\"k\":\"\",\"t\":\"currentTimestamp\",\"v\":1707299228191},{\"e\":null,\"k\":\"\",\"t\":\"offset\",\"v\":-330}],\"snapshots\":[{\"activationTimestamp\":1707299228107,\"decisions\":[],\"events\":[{\"e\":null,\"y\":\"client_activation\",\"u\":\"0378538c-8eb4-4713-ab81-8e5d0027a68b\",\"t\":1707299228145}"
		"]},{\"activationTimestamp\":1707299228107,\"decisions\":[{\"c\":\"25257120658\",\"x\":null,\"v\":null,\"h\":false},{\"c\":\"27002790880\",\"x\":null,\"v\":null,\"h\":false}],\"events\":[{\"e\":\"25257120658\",\"y\":\"campaign_activated\",\"u\":\"37849daf-9ba1-4854-b858-17357aedb2d7\",\"t\":1707299228178},{\"e\":\"27002790880\",\"y\":\"campaign_activated\",\"u\":\"9637a857-4e19-4977-9cd5-7c0ac7385481\",\"t\":1707299228193}]}]}]}", 
		LAST);

	web_concurrent_start(NULL);

	web_url("arrays.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/utils/arrays.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("compare.min.js", 
		"URL=https://in-media.apjonlinecdn.com/static/version1707169154/frontend/HPOLS/stellar/en_US/mage/utils/compare.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://www.hp.com/", 
		"Snapshot=t114.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}