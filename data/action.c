Action()
{

	web_add_cookie("FinansbankMecra=8/25/2016|(direct)|||; DOMAIN=wwwtest.finansbank.com.tr");

	web_add_cookie("FirstClick=8/25/2016|(direct)|||; DOMAIN=wwwtest.finansbank.com.tr");

	web_add_cookie("LastClick=8/25/2016|(direct)|||; DOMAIN=wwwtest.finansbank.com.tr");

	web_add_cookie("AssistedKanalVeKaynaklar=; DOMAIN=wwwtest.finansbank.com.tr");

	web_url("wwwtest.finansbank.com.tr", 
		"URL=http://wwwtest.finansbank.com.tr/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/js/HomePageCalculateLoan.js", ENDITEM, 
		"Url=/fonts/Ubuntu-R-webfont.eot?", ENDITEM, 
		"Url=/fonts/opensans-regular.eot?", ENDITEM, 
		"Url=/images/_home-new/basvuru-arrow.png", ENDITEM, 
		"Url=/images/footer/social/socialN.png", ENDITEM, 
		"Url=/images/footer/tel-sp.png", ENDITEM, 
		"Url=/images/_topnavigation/new-topnavigation/topnavigation.png?v2", ENDITEM, 
		"Url=/images/_home-new/searchErrorArrow.png", ENDITEM, 
		"Url=/images/_home-new/kampanyalarIcon.png", ENDITEM, 
		"Url=/images/_home-new/intSubeBtnSet.jpg", ENDITEM, 
		LAST);

	web_custom_request("_.swf", 
		"URL=http://wwwtest.finansbank.com.tr/_assets/_.swf", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(34);

	web_url("wwwtest.finansbank.com.tr_2", 
		"URL=http://wwwtest.finansbank.com.tr/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/_assets/_.swf", ENDITEM, 
		"Url=/fonts/Ubuntu-R-webfont.eot?", ENDITEM, 
		"Url=/images/_topnavigation/new-topnavigation/new-navigation.png", ENDITEM, 
		"Url=/images/_home-new/calcArrow.jpg", ENDITEM, 
		"Url=/images/_home-new/intSubeBtnSet.jpg", ENDITEM, 
		"Url=/images/_home-new/hemenBasvur.jpg", ENDITEM, 
		"Url=/images/_home-new/duyuru-i.jpg", ENDITEM, 
		"Url=/fonts/Ubuntu-B-webfont.eot?", ENDITEM, 
		"Url=/images/kredi-basvuru/select-arrow.jpg", ENDITEM, 
		"Url=/images/_home-new/hover.png", ENDITEM, 
		"Url=/images/_home-new/btnHoverBg.jpg", ENDITEM, 
		"Url=/images/_home-new/btnHoverArrow.png", ENDITEM, 
		"Url=/images/kredi-basvuru/ico-ui.png", ENDITEM, 
		"Url=/banner/media/691/ABAV2/gorsel.aspx", ENDITEM, 
		"Url=/css/select2/select2.png", ENDITEM, 
		LAST);

	web_custom_request("_.swf_2", 
		"URL=http://wwwtest.finansbank.com.tr/_assets/_.swf", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("_.swf_3", 
		"URL=http://wwwtest.finansbank.com.tr/_assets/_.swf", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/x-shockwave-flash", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ihtiyac-kredisi.xml", 
		"URL=http://wwwtest.finansbank.com.tr/xml/ihtiyac-kredisi.xml?v1472103565433", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://wwwtest.finansbank.com.tr/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}