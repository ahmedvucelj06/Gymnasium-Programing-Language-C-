#include<stdio.h>
#include<string.h>
 
int main ()
{
    char kod[1000];
    
    printf("Dobrodosli u pretrazivac. \nNAPOMENA - Pretraga mora biti gramaticki ispravna!");
    
    printf("\n\n\t\t\t\t\tPretrazite:");
    scanf("%[^\n]s", kod);
    
    if(strcmp(kod, "Dzastin Biber") == 0 ) {
        printf("\nDzastin Biber je rodjen 1. januara 1990. godine. Poznati je pop pevac i tekstopisac. Svetsku slavu je stekao putem internetskog portala YouTube, gde je postavljao svoje kovere pesama drugih izvodjaca, poput Alisije Kejs, Dzastina Timberlejka i Krisa Brauna. Nakon sto ga je otkrio njegov sadasnji menadzer Skuter Braun, Dzastin je potpisao ugovor sa diskografskom kucom Island Records uz veliku pomoc muzicara Usera.");
    }
    
    else if(strcmp(kod, "Ilon Mask") == 0 ) {
        printf("\nIlon Mask je juznoafricki i americki preduzetnik i inzenjer, jedan od najbogatijih ljudi na svetu. Rodjen je 28. juna 1971. godine u Pretoriji, u Juznoafrickoj Republici. Zivi u Los Andelesu, SAD. Direktor je kompanije Tesla koja se bavi proizvodnjom elektricnih automobila, a takode je osnivac, izvršni i tehnicki direktor SpaceX-a, privatne kompanije koja se bavi izradom svemirskih letelica i svemirskim letovima.");
    }
    
    else if(strcmp(kod, "Bil Gejts") == 0 ) {
        printf("\nWilliam Henry Bill Gates III (roden 28. 10. 1955.) americki je biznismen, filantrop, investitor i racunarski programer. Zajedno s Paulom Alenom 1975., osnovao je kompaniju Microsoft, koja je postala najveca kompaniju racunarskog softvera na svetu. Tokom svoje karijere u Microsoftu, Gates je obavljao dužnost predsednika upravnog odbora, predsednika kompanije i glavnog softverskog arhitekte, te je posedovao najvise Microsoftovih deonica sve do marta 2014. Takodje je autor i koautor nekolicine knjiga.");
    }
    
    else if(strcmp(kod, "Selena Gomez") == 0 ) {
        printf("\nSelena Marie Gomez (Grand Prairie, Teksas, SAD, 22. februara 1992.) nazivana Pop princeza , americka je pevacica, glumica, dizajnerka, producentkinja i tekstopisac meksickog i italijanskog porekla. Svetsku slavu stekla je objavom Kiss & Tell albuma sa svojom grupom Selena Gomez & The Scene. Grupa je objavila tri studijska albuma: Kiss & Tell , A Year Without Rain, te When The Sun Goes Down. Glumacku karijeru stekla je u ulozi Alex Russo u Emmyjem nagradjenoj Disneyevoj seriji Wizards of Waverly Place. ");
    }
    
    else if(strcmp(kod, "Kendal Dzener") == 0) {
        printf("\nKendall Nicole Jenner (Los Andjeles, 3. januara 1995.) je americka manekenka i javna licnost. Cerka je Kris Jenner i Caitlyn Jenner, a postala je poznata po reality-u Show Keeping Up with the Kardashians. Sa 14 godina se krenula baviti modelingom, a saradjivala je sa poznatim high-fashion modnim brendovima, te ucestvovala na nedeljama mode u New Yorku, Parizu i Londonu. Ona je brend ambasador marke Estee Lauder.");
    }
    
    else if(strcmp(kod, "Ariana Grande") == 0) {
        printf("\nAriana Grande je americka pevacica, tekstopisac i glumica. Rodjena je 26. juna 1993. godine u Boki Raton, na Floridi. Karijeru je zapocela 2008. godine, u brodvejskom mjuziklu „13“. Posle toga se proslavila u Nickelodeon seriji „Victorious“ kao i u obradi „Sam & Cat“. Muzicku karijeru zapocela je 2011. godine, nakon sto je napisala muziku za „Victorious“. Od tada je izdala sest albuma koji su dospeli na prvo mesto „Billboard 200“ lestvice.");
    }
    
    else if(strcmp(kod, "Vladimir Putin") == 0) {
        printf("\nVladimir Vladimirovic Putin je ruski politicar, drzavnik i aktuelni predsednik Ruske Federacije. Vazi za jednog od vodecih lidera na pocetku treceg milenijuma. Rodjen je 7. oktobra 1952. godine u Lenjingradu, sadasnjem Sankt Peterburgu.Vladimirovi roditelji su bili Marija Ivanovna Putina koja je radila u fabrici i Vladimir Spiridonovic Putin, koji je bio vojni obveznik u sovjetskoj mornarici gde je sluzio u podmornickoj floti i u NKVD, bivsoj tajnoj policiji Sovjetskog Saveza.");
    }
    
    else if(strcmp(kod, "Nikola Tesla") == 0) {
        printf("\nNikola Tesla bio je veliki srpski izumitelj i vizionar, elektrotehnicar i fizicar. U svetu znanstvenika Teslu je pratila reputacija samotnjaka i ekscentrika. Nikola Tesla se danas smatra jednim od najvecih genija na podrucju elektrotehnike. Nikola Tesla umro je 7.1.1943. godine u 87. godini zivota u hotelu New Yorker u New Yorku.");
    }
    
    else if(strcmp(kod, "Jovan Cvijic") == 0) {
        printf("\nJovan Cvijic (Loznica, 11. oktobar 1865 — Beograd, 16. januar 1927) bio je srpski naucnik, osnivac Srpskog geografskog drustva, predsednik Srpske kraljevske akademije, profesor i rektor Beogradskog univerziteta, pocasni doktor Univerziteta Sorbone i Karlovog univerziteta u Pragu. Od osnivanja Beogradskog univerziteta 12. oktobra 1905, postao je jedan od osam prvih redovnih profesora na Univerzitetu.");
    }
 
    else if(strcmp(kod, "Novak Djokovic") == 0) {
        printf("\nNovak Djokovic (Beograd, 22. maj 1987) srpski je profesionalni teniser. Na prvom mestu ATP liste je proveo 351 nedelju sto je najduži period u istoriji otvorene ere. Mnogi teniski kriticari, bivsi igraci i saigraci smatraju Djokovica jednim od najboljih tenisera u istoriji. Profesionalno igra od 2003. godine. U dosadašnjoj karijeri je osvojio 20 titula na grend slem turnirima: devet puta Otvoreno prvenstvo Australije, sest puta Vimbldon, tri puta Otvoreno prvenstvo SAD i dva puta Rolan Garos.");
    }
 
    else if(strcmp(kod, "Saban Saulic") == 0) {
        printf("\nSaban Saulic je rodjen 6. septembra 1951. u Sapcu. Njegova majka Ilduza Demirovic je iz Bijeljine, gde je on i sam proveo dosta vremena. Saulic je ziveo i radio u Beogradu. Sa svojom suprugom Gordanom je imao troje dece — Sanelu, Ildu i Mihajla, kao i vanbracnog sina Roberta, kojeg je dobio pre poznanstva sa Gordanom. Omiljeni hobiji su mu bili pecanje u svojoj vikendici u Krcedinu i fudbal.");
    }
    
    else if(strcmp(kod, "Sasa Matic") == 0) {
        printf("\nAleksandar Matic rodjen je 1978. godine u Drvaru gdje je odrastao s bratom Dejanom, majkom Dragicom i ocem Zoranom. U dobi od 7 godina, 1985. godine, s porodicom napusta rodno mesto i odlazi u Beograd. Nizu i srednju muzicku skolu je zavrsio u Zemunu. Tri godine je pevao u klubu Spanac, koji se nalazi u okviru Studentskog grada, u Novom Beogradu. Tada je bio popularan po idealnom interpretiranju pesama Harisa Dzinovica. Prvi album je objavio 15. marta 2001. godine i odmah je stekao siroku popularnost. Pobedjuje na Budvanskom festivalu 2003. i na prvom Grand festivalu 2006. godine.");
    }
    
    else if(strcmp(kod, "Isak Njutn")==0) {
        printf("\nIsak Njutn (Isaac Newton) je bio engleski matematicar, fizicar, astronom, jedna od najvaznijih licnosti u istoriji nauke i kljucna figura u naucnoj revoluciji. Njegova „Philosophic Naturalis Principia Mathematica“ objavljena 1687. godine smatra se najznacajnijim delom u istoriji moderne nauke koja se ne moze zamisliti bez njegovih otkrica.");
    }
    
    else if(strcmp(kod, "Albert Ajnstajn")==0) {
        printf("\nAlbert Ajnštajn je bio teorijski fizicar. Vazi za jednog od najznacajnijih svetskih naucnika i najvecih naucnika XX veka. Roden je 14. marta 1879. godine u nemackom gradu Ulmu, a umro je 18. aprila 1955. godine u Prinstonu, SAD. Definisao je specijalnu i opstu teoriju relativnosti, a pomogao je i pri razvoju kvantne fizike. 1921. godine je dobio Nobelovu nagradu za formulisanje i objašnjenje fotoelektricnog efekta.");
    }
        
    else if(strcmp(kod, "Elvis Prisli")==0) {
        printf("\nElvis Aaron Presley (East Tupelo, 8. mart 1935), americki pevac. Cesto je nazivan kraljem rok en rola ili samo Kraljem, jos za zivota legenda i neokrunjeni kralj rok en rola. U javnosti je poceo pevati s 13 godina na crkvenim svecanostima i srednjoskolskim priredbama u Memfisu. S 18 godina je napustio skolu i pozeleo raditi kao portir u bioskopu i kao vozac kamiona. Prvu pesmu snimio je kao rodjendanski dar majci. Prvu plocu snimio je 1954. godine. Njegov uzlet zapocinje sredinom 50-ih godina hitovima - That s All Right Mama i Heartbreak Hotel, a najuspjesnije mu je razdoblje od 1960. do 1975. godine u kojem je izdao 52 ploce i jos za zivota ih prodaje oko 600 milionna komada.");  
    }   
    
    else if(strcmp(kod, "Majkl Dzekson")==0) {
        printf("\nMajkl Džozef Džekson (engl. Michael Joseph Jackson; 29. avgust 1958) je bio americki muzicar, zabavljac i biznismen. Osmo je dete porodice Dzekson. Debitovao je na profesionalnoj muzickoj sceni sa jedanaest godina kao clan grupe Dzekson 5. Solo karijeru je zapoceo 1971., dok je jos uvek bio clan grupe. U kasnijim godinama u javnosti se cesto nazivao Kraljem popa. Pet njegovih solo studijskih albuma su jedni od najprodavanijih muzickih materijala na svetu.");      
    }
    
    else if(strcmp(kod, "Tejlor Svift")==0) {
        printf("\nTejlor Alison Svift (Taylor Alison Swift) je americka kantri i pop pevacica. Ubrajaju je medju najuticajnije mlade zvezde, a magazin 'Tajm' (Time) je proglasio jednom od osoba 2017. godine zbog njene borbe protiv seksualnog uznemiravanja. Vecinu pesama koje izvodi je sama i napisala, svira gitaru, klavir, bendzo i ukelele, a okusala se i u glumackim vodama. Debitantski album je izdala sa samo 16 godina i jedina je zena koja je dve godine zaredom osvojila nagradu Gremi (Grammy) u kategoriji album godine.");       
    }
 
    else if(strcmp(kod, "Dzenifer Lopez")==0) {
        printf("\nJennifer Lynn (Lin) Lopez je americka pop pevacica i glumica. Rodena je 24. jula 1969. godine u Njujorku. Zivi i radi u Los Andelesu. Karijeru je pocela graditi 1991. godine, kada je dobila ulogu u filmu - In Living Color. Prvu glavnu ulogu dobila je 1997. godine, kada je igrala Selenu u istoimenom filmu. Za to ostvarenje dobila je nominaciju za Zlatni globus, a postala je i prva Latino-Amerikanka koja je zaradila preko milion dolara u nekom filmu. Krajem devedesetih postala je jedna od najplacenijih glumica u Holivudu.");  
    }
 
    else if(strcmp(kod, "Lepa Brena")==0) {
        printf("\nFahreta Jahic zivojinovic, poznatija kao Lepa Brena, je jedna od najpoznatijih jugoslovenskih pevacica. Rodjena je 20. oktobra 1960. godine u Tuzli. Odrasla je u Brckom, a otac Abid i majka Ifeta su joj omogucili skromno i bezbrizno detinjstvo. Lepa Brena ima sestru Faketu i brata Faruka.");  
    }
 
    else if(strcmp(kod, "Mark Cukenberg")==0) {
        printf("\nMark Zuckerberg rodjen je 1984. godine u White Plainsu, u New Yorku, u porodici majke psihijatarke i oca stomatologa, te jos dve sestre s kojima se doselio u Dobbs Ferry. Mark je odgojen u zidovskom duhu sve do 13 godine zivota kad je izjavio kako je tada sebe poceo dozivljavati kao ateista, a ne kao vernika."); 
    }
    
    else if(strcmp(kod, "Kim Dzong Un")==0) {
        printf("\nKim Jong-un (8. juna 1982. ili 1983.) severnokorejski je politicar i vrhovni vodja Severne Koreje od 2011. Vodja je Radnicke partije Koreje od 2012. Drugo je dete Kim Jong-ila, drugog vrhovnog vodje Severne Koreje od 1994. do 2011. Unuk je Kim Il-Sunga, osnivaca i prvog vrhovnog vode Severne Koreje od 1948. do smrti 1994. Dana 24. februara 2011. godine postao je marsal, i vrhovni zapovednik vojske, a dva dana posle, 26. marta, postao je predsednik Centralnog komiteta Radnicke partije Koreje.");   
    }
    
    else if(strcmp(kod, "Kim Dzong un")==0) {
        printf("\nKim Jong-un (8. juna 1982. ili 1983.) severnokorejski je politicar i vrhovni vodja Severne Koreje od 2011. Vodja je Radnicke partije Koreje od 2012. Drugo je dete Kim Jong-ila, drugog vrhovnog vodje Severne Koreje od 1994. do 2011. Unuk je Kim Il-Sunga, osnivaca i prvog vrhovnog vode Severne Koreje od 1948. do smrti 1994. Dana 24. februara 2011. godine postao je marsal, i vrhovni zapovednik vojske, a dva dana posle, 26. marta, postao je predsednik Centralnog komiteta Radnicke partije Koreje.");   
    }
 
    else if(strcmp(kod, "Angela Merkel")==0) {
        printf("\nAngela Dorotea Merkel (nem. Angela Dorothea Merkel), rodjena kao Angela Dorotea Kazner, (nem. Angela Dorothea Kasner; Hamburg, 17. jul 1954) je bivsa kancelarka Nemacke. Clanica je Hriscansko-demokratske unije, od koje je nominovana na mesto kancelara SR Nemacke na izborima za Bundestag 2005. godine. Nakon visesedmicnog pregovaranja po zavrsetku izbora, Angela Merkel 22. novembra 2005. postaje prva kancelarka u istoriji Nemacke. Na celu je tzv. 'Velike koalicije' CDU/CSU i SPD. Uspesno posredujuci u pregovorima oko budžeta EU, Merkelova je stekla zavidnu reputaciju na medjunarodnoj sceni. Koalicija koju je vodila Angela Merkel je pobedila i na izborima 2009. godine i na izborima 2013. godine."); 
    }
 
    else if(strcmp(kod, "Nikola Jokic")==0) {
        printf("\nNikola Jokic (Sombor, 19. februar 1995) srpski je kosarkas. Igra na poziciji centra, a trenutno nastupa za Denver Nagetse. Prvi je Srbin koji je proglasen za najkorisnijeg igraca NBA lige. Nagradu za najboljeg kosarkasa najjace lige na svetu je dobio u sezoni 2020/21. Tri sezone je nastupao za Mega Leks i proglašen je za najkorisnijeg igraca Jadranske lige. Izabran je u drugom krugu NBA drafta 2014. kao 41. pik od strane Denver Nagetsa sa kojima je u julu 2015. potpisao ugovor. Kosarkaski savez Srbije dodelio je Jokicu nagradu za najboljeg srpskog kosarkasa u 2018. godini. Godine 2019. izabran je prvi put da igra na Ol-star utakmici. Kao lider franšize, izborio je doigravanje u sezoni 2018/19 i posle deset godina Denver je prosao prvu rundu doigravanja. Iste sezone je izabran u najbolju petorku NBA lige, a po drugi put je izabran u idealnu petorku u sezoni 2020/21.");    
    }
 
    else if(strcmp(kod, "Bogdan Bogdanovic")==0) {
        printf("\nBogdan Bogdanovic (Beograd, 18. avgust 1992) srpski je kosarkas. Igra na poziciji beka, a trenutno nastupa za Atlanta Hokse. Proglasen je za Evroliginu zvezdu u usponu dva puta uzastopno - 2014. i 2015. Osvojio je Evroligu sa Fenerbahceom 2017. godine i uvrsten je u idealni tim Evrolige. Standardan je clan seniorske reprezentacije Srbije, jedan je od vodecih igraca i sa reprezentacijom je osvajao medalje na skoro svim takmicenjima.");    
    }
    
    else if(strcmp(kod, "Leonardo Dikaprio")==0) {
        printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn."); 
    }
    
    else if(strcmp(kod, "Leonardo Di Kaprio")==0) {
        printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn."); 
    }
    
    else if(strcmp(kod, "Leonardo di Kaprio")==0) {
        printf("\nLeonardo Vilhelm Dikaprio (Leonardo Wilhelm DiCaprio Los Andjeles, 11. novembra 1974.), americki je glumac i producent. Pet puta je nominovan za nagradu Oskar, za najboljeg glumca u glavnoj ulozi u filmovima Avijaticar (2004), Krvavi dijamant (2006), Vuk sa Vol Strita (2013) i Povratnik (2016), za koji je i dobio ovu nagradu. Takodje, bio je nominovan i za najboljeg glumca u sporednoj ulozi u filmu 'Sta izjeda Gilberta Grejpa' (1994), cetiri puta za nagradu BAFTA, a jedanaest puta za nagradu Zlatni globus. Dobitnik je nagrade BAFTA za najboljeg glumca u glavnoj ulozi za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je dobitnik i tri Zlatna globusa – za najboljeg glavnog glumca u drami za ulogu Hauarda Hjuza u filmu Avijaticar (2004), za najboljeg glavnog glumca u komediji ili mjuziklu za ulogu Dzordana Belforta u filmu Vuk sa Vol Strita (2013) i za najboljeg glavnog glumca u drami za ulogu Hju Glasa u filmu Povratnik (2016). Takodje je bio nominovan za nagrade Satelit, Nagradu Udruzenja filmskih glumaca i Saturn."); 
    }
    
    else if(strcmp(kod, "Leonardo da Vinci")==0) {
        printf("\nLeonardo di ser Pjero da Vinci (ital. Leonardo di ser Piero da Vinci, Vinci, 15. april 1452 — Amboaz, 2. maj 1519), poznat kao Leonardo da Vinci, bio je italijanski renesansni arhitekta, pronalazac, inženjer, vajar i slikar. („di ser Pjero” ovde znaci od oca ser Pjera, gde je ser kolokvijalna skracenica od Sinjor u Italiji srednjeg veka, i ukazuje da onaj koji je nosi obavlja profesiju javnog beležnika.) Smatran idealnim „renesansnim covekom” i univerzalnim genijem, Leonardo je siroj publici poznat po svojim remek-delima, Tajna vecera i Mona Liza, a njegove inzenjerske izume koji su vec u njegovo doba smatrani daleko ispred vremena i danas ponovo otkrivaju moderni inzenjeri i naucnici. Pomogao je razvoju anatomije, astronomije i gradjevinarstva.");    
    }
    
    else if(strcmp(kod, "Leonardo Da Vinci")==0) {
        printf("\nLeonardo di ser Pjero da Vinci (ital. Leonardo di ser Piero da Vinci, Vinci, 15. april 1452 — Amboaz, 2. maj 1519), poznat kao Leonardo da Vinci, bio je italijanski renesansni arhitekta, pronalazac, inženjer, vajar i slikar. („di ser Pjero” ovde znaci od oca ser Pjera, gde je ser kolokvijalna skracenica od Sinjor u Italiji srednjeg veka, i ukazuje da onaj koji je nosi obavlja profesiju javnog beležnika.) Smatran idealnim „renesansnim covekom” i univerzalnim genijem, Leonardo je siroj publici poznat po svojim remek-delima, Tajna vecera i Mona Liza, a njegove inzenjerske izume koji su vec u njegovo doba smatrani daleko ispred vremena i danas ponovo otkrivaju moderni inzenjeri i naucnici. Pomogao je razvoju anatomije, astronomije i gradjevinarstva.");    
    }
    
    else if(strcmp(kod, "Milena Dravic")==0) {
        printf("\nMilena Dravic (Beograd, 5. septembra 1940. – Beograd, 14. septembra 2018.), bila je srpska filmska i televizijska glumica. U karijeri koja je trajala 60 godina, Milena Dravic snimila je 90 filmova, a u vise od 50 ostvarila je glavne zenske uloge i osvojila brojne filmske nagrade. Glumom se pocela baviti jos kao srednjoskolka, kada je otkriva slovenski reziser Frantisek Cap s kojim snima svoj prvi film - Vrata ostaju otvorena (1959). Potom, u relativno kratkom vremenu, ostvaruje jos nekoliko filmskih uloga.");  
    }
    
    else if(strcmp(kod, "Mustafa Nadarevic")==0) {
        printf("\nMustafa Nadarevic (Banja Luka, 2. maj 1943 — Zagreb, 22. novembar 2020) bio je hrvatski i bosanskohercegovacki pozorisni i filmski glumac i reziser. Najpoznatiji po ulozi Izeta Fazlinovica, u seriji 'Lud zbunjen normalan', gde je tumacio glavnu musku ulogu. Nadarevic je diplomirao glumu na zagrebackoj Akademiji za kazalisnu umetnost, a pozorišnu karijeru zapoceo kao clan Zagrebackog kazalista mladih. Postao je stalni clan ansambla Hrvatskog narodnog kazalista u Zagrebu 1969. godine. Nadarevicu je dijagnostikovan rak pluca u januaru 2020. Umro je 22. novembra 2020. godine u svom domu u Zagrebu, zbog komplikacija iste bolesti.");    
    }
    
    else if(strcmp(kod, "Silvester Stalone")==0) {
        printf("\nMajkl Silvester Gardenzio Stalone (engl. Michael Sylvester Gardenzio Stallone; Njujork, 6. jul 1946) americki je filmski glumac, reziser i scenarista. Najpoznatiji je po filmskim serijalima Roki i Rambo. Svoju glumacku karijeru zapocinje u pornografskom filmu Zurka „Kod Kiti i pastuva” (engl. Party at Kitty and Stud's), 1970. godine. Kasnije dobija malu ulogu sa Vudijem Alenom u filmu Banane (engl. Bananas; 1971). Posle toga dobija jos nekoliko manjih filmskih uloga, a kasnije se pojavljuje kao gost u TV serijama Policijska prica (engl. Police Story) i Kodzak (engl. Kojak). Filmsku slavu stice 1976. godine ulogom boksera u velikim filmskom hitu Roki (engl. Rocky).");   
    }
    
    else if(strcmp(kod, "Andzelina Dzoli")==0) {
    printf("\nAndželina Džoli Vojt (engl. Angelina Jolie Voight 4. jun 1975) americka je filmska i televizijska glumica, reditelj, manekenka i ambasador dobre volje Visokog komesarijata UN za izbeglice. Proslavila se krajem 90-ih godina 20. veka glumeci Laru Kroft, junakinju istoimenog akcionog filma. Pocetkom 2000-ih obelezila ju je veza i brak sa glumcem Bredom Pitom. Uz Dzenifer Lorens i Sandru Bulok, uspela je da odrzi status najplacenijih i najuticajnih glumica na svetu.");
    }
    
    else if(strcmp(kod, "Dzejson Stejtam")==0) {
    printf("\nDzejson Stejtam (engl. Jason Statham) britanski je glumac, roden 26. jula 1967. godine u Londonu (Engleska). Najpoznatiji je po ulogama u akcionim filmovima Duhovi sa Marsa, Transporter, Transporter 2, Transporter 3, Adrenalin, Adrenalin 2, Haos, Smrtonosna trka, Rat, Placenici i drugi. Rodjen je u Londonu kao sin barskog pevaca i plesacice. U detinjstvu je igrao fudbal i bio ulicni zabavljac, a bavio se skokovima u vodu. Bio je 12 godina clan britanske reprezentacije pa je na Svetskom prvenstvu 1992. godine zauzeo 12. mesto. Stejtama je otkrio reditelj Gaj Rici dok je ovaj radio kao model. Godine 1998. dao mu je ulogu u svom hitu Dve cadave dvocevke, cime je Stejtam postao glumac prakticno bez ikakvog glumackog obrazovanja.");
    }
    
    else if(strcmp(kod, "Dvejn Dzonson")==0) {
    printf("\nDvejn Daglas Dzonson (engl. Dwayne Douglas Johnson; Hejvard, 2. maj 1972) poznatiji kao Rok (engl. The Rock), americki je glumac, producent, preduzetnik i profesionalni rvac. Dzonson je igrao americki fudbal na koledzu. Nakon neuspesne sezone u kanadskoj fudbalskoj ligi, odlucuje da se bavi profesionalnim rvanjem, poput svog oca i svoga dede. Vrhunac rvacke karijere dostigao je u periodu od 1996. do 2004. u kom je nastupao za WWE, tadašnji WWF. Dzonson je po mnogima jedan od najvecih profesionalnih rvaca svih vremena. Svojom harizmaticnim nastupima i intervjuima postao je jedan od najpopularnijih rvaca. Osvojio je brojne svetske, interkontinentalne i teg titule, kao i Rojal rambl 2000. godine.");
    }
    
    else if(strcmp(kod, "Nadezda Petrovic")==0) {
    printf("\nNadezda Petrovic (Cacak, 11. oktobar 1873 — Valjevo, 3. april 1915) bila je srpska slikarka i fotograf. Jedna je od osnivaca Kola srpskih sestara i prvi sekretar organizacije. Njen opus obuhvata skoro trista ulja na platnu, oko stotinu skica, studija i krokija kao i nekoliko akvarela. Dela joj spadaju u tokove secesije, simbolizma, impresionizma i fovizma. Na njenim najboljim radovima dominiraju velike povrsine, njene omiljene, uzareno crvene boje i, njoj komplementarna, zelena. Ljubav prema bojama stvara na nekim platnima koloristicki vrtlog gde se, pored ostalih, isticu fovisticka ljubicasta, plava i crna boja. Snazni potezi cetkice i široki i gusti, pastuozni, namazi ponekad platno pretvaraju u dinamicnu reljefastu povrsinu. Volela je da slika portrete i pejzaze, a njen patriotizam ogledao se i u cestom izboru tema iz nacionalne istorije i slikanju ljudi i predela Srbije.");
    }
    
    else if(strcmp(kod, "Djordje Vajfert")==0) {
    printf("\nÐorde Vajfert (nem. Georg Weifert; Pancevo, 15. jul 1850 — Beograd, 12. januar 1937) bio je srpski industrijalac nemackog porekla i guverner Narodne banke. Djorde Vajfert, od oca Ignjata i majke Ane, rodio se u Pancevu. Ziveo je u imucnoj pancevackoj porodici industrijalaca. Pancevo je tada bilo malo pogranicno mesto na uscu reke Tamis u Dunav, naseljeno pretezno Srbima, Nemcima i Madjarima. Sa druge strane granice preko Dunava je lezao grad Beograd, komercijalni centar i glavni grad ponovo uspostavljene Kraljevine Srbije.");
    }
    
    else if(strcmp(kod, "Napoleon Bonaparta")==0) {
    printf("\nNapoleon I Bonaparta (franc. Napoléon I Bonaparte; Ajaco, 15. avgust 1769 — Longvud Sveta Jelena, 5. maj 1821) je bio general u Francuskoj revoluciji i kao voda bio je prvi konzul Francuske Republike od 11. novembra 1799. do 18. maja 1804. i car Francuske i kralj Italije od 18. maja 1804. do 6. aprila 1814. i onda ponovo na kratko od 20. marta do 22. juna 1815. Napoleon vazi za jednog od najvestijih vojskovoda i stratega u istoriji, kao i za kontroverznog lidera. Jedni ga gledaju kao pohlepnog i beskrupuloznog autokratu i tiranina, odgovornog za smrt vise miliona ljudi, dok ga drugi posmatraju kao hrabrog i smelog vladara i nacionalnog heroja. Ono sto je nepobitno je da je se svojim manevrima uvrstio medu najpoznatije istorijske figure svih vremena.");
    }
    
    else if(strcmp(kod, "Galileo Galilej")==0) {
    printf("\nGalileo Galilej (ital. Galileo Galilei; Piza, 15. februar 1564 — Firenca, 8. januar 1642) bio je italijanski astronom, fizicar, matematicar i filozof, cija su istrazivanja postavila temelje modernoj mehanici i fizici. Rodjen je u Pizi. Uglavnom je obrazovan u manastiru Valombroza pored Firence, a na univerzitetu u Pizi studirao je od 1581. do 1585. godine. Ubrzo posle toga, neko vreme je predavao na firentinskoj Akademiji. Na univerzitetu u Pizi je predavao matematiku od 1592. do 1610. Bio je filozof i matematicar kod velikog toskanskog vojvode od 1610. pa do kraja svog zivota. ");
    }
    
    else if(strcmp(kod, "Adolf Hitler")==0) {
    printf("\nAdolf Hitler (nem. Adolf Hitler; Braunau na Inu, 20. april 1889 — Berlin, 30. april 1945) bio je nemacki politicar, diktator i voda Nacisticke partije koji je 1933. postao nemacki kancelar (premijer, predsednik vlade). Posle smrti nemackog predsednika Paula fon Hindenburga 1934, Hitler je proglasio sebe za firera (vodu), zvanje u kojem je, zahvaljujuci uredbi (nem. Ermachtigungsgesetz) iz 1933, objedinio ovlascenja predsednika i kancelara i uspostavio totalitarni rezim u Nemackoj pod njegovom vlascu, koji je trajao sve do smrti samoubistvom 1945. godine.");
    }
    
    else if(strcmp(kod, "Volfgan Amadeus Mocart")==0) {
    printf("\nVolfgang Amadeus Mocart (kršteno: Johanes Krisostomus Volfgangus Teofilus Mocart; Salcburg, 27. januar 1756 — Bec, 5. decembar 1791) bio je austrijski kompozitor i pijanista, jedan od najznacajnijih i najuticajnijih svetskih kompozitora klasicne muzike. Mocartov rad od preko sest stotina dela, pokriva gotovo sve zanrove njegovog doba, ukljucujuci simfonije, koncerte, kamernu muziku, muziku za klavir, operske i horske kompozicije.");
    }
    
    else if(strcmp(kod, "Mocart")==0) {
    printf("\nVolfgang Amadeus Mocart (kršteno: Johanes Krisostomus Volfgangus Teofilus Mocart; Salcburg, 27. januar 1756 — Bec, 5. decembar 1791) bio je austrijski kompozitor i pijanista, jedan od najznacajnijih i najuticajnijih svetskih kompozitora klasicne muzike. Mocartov rad od preko sest stotina dela, pokriva gotovo sve zanrove njegovog doba, ukljucujuci simfonije, koncerte, kamernu muziku, muziku za klavir, operske i horske kompozicije.");
    }
    
    else if(strcmp(kod, "Vilijam Sekspir")==0) {
    printf("\nVilijam Šekspir (engl. William Shakespeare; Stratford na Ejvonu, kršt. 26. april 1564 — Stratford na Ejvonu, 23. april 1616) bio je engleski pesnik i dramski pisac, koji se, prema vise razlicitih izvora, smatra za najveceg pisca na engleskom jeziku i dramaturga svetskog glasa. Opus Sekspirovih dela koja su sacuvana do danas sastoji se od 38 pozorisnih komada, 154 soneta, dve duge narativne i nekoliko drugih poema. Njegovi pozorisni komadi su prevedeni na mnoge zive jezike i prikazuju se svuda u svetu cesce nego bilo koji drugi.");
    }
    
    else if(strcmp(kod, "Carli Caplin")==0) {
    printf("\nCarls Spenser Caplin mladji (engl. Sir Charles Spencer Chaplin Jr.), poznat kao Carli Caplin ili ranije kao Sarlo Akrobata (London, 16. april 1889 – Vevej, 25. decembar 1977), bio je engleski filmski reziser, glumac, scenarista i producent britanskog porekla, jedan od najvecih komicara svih vremena. Jedan je od pionira kinematografije i najvecih sineasta svih vremena. Neobicno je zaslužan za sirenje popularnosti filma i za njegovo priznanje u sferama tradicionalne kulture. Njegov izvorni humanizam formiran u periodu teske mladosti izrazen je u liku dobrocudne skitnice Carlija cija je dobrota prema okolini srazmerna njenim zlim namerama. Ucinio je da svima postane jasna snaga filmskog govora i njegova moc u afirmaciji univerzalnih i trajnih ljudskih vrednosti.");
    }
    
    else if(strcmp(kod, "Vinsent van Gog")==0) {
    printf("\nVinsent Vilem van Gog (hol. Vincent Willem van Gogh; Zindert, 30. mart 1853 — Over sir Oaz, 29. jul 1890) bio je slikar holandskog porekla. Jedan je od trojice najvecih slikara postimpresionizma i jedan od najcenjenijih slikara uopste. Njegova dela su zapazena po svojoj gruboj lepoti, emotivnoj iskrenosti i hrabrim bojama, te je zahvaljujuci tome postao jedan od vodecih umetnika 19. veka. Nakon dugog i bolnog problema sa anksioznoscu i ucestalim problemima mentalnih bolesti, umro je od prostrelne rane metkom u svojoj 37. godini. Opste je prihvaceno misljenje da je izvrsio samoubistvo, iako pistolj iz koga je pucano, nikada nije pronadjen. Njegov rad je za vreme njegovog zivota bio poznat samo nekolicini ljudi, a samo par ga je cenilo i postovalo.");
    }
    
    else if(strcmp(kod, "Vinsent Van Gog")==0) {
    printf("\nVinsent Vilem van Gog (hol. Vincent Willem van Gogh; Zindert, 30. mart 1853 — Over sir Oaz, 29. jul 1890) bio je slikar holandskog porekla. Jedan je od trojice najvecih slikara postimpresionizma i jedan od najcenjenijih slikara uopste. Njegova dela su zapazena po svojoj gruboj lepoti, emotivnoj iskrenosti i hrabrim bojama, te je zahvaljujuci tome postao jedan od vodecih umetnika 19. veka. Nakon dugog i bolnog problema sa anksioznoscu i ucestalim problemima mentalnih bolesti, umro je od prostrelne rane metkom u svojoj 37. godini. Opste je prihvaceno misljenje da je izvrsio samoubistvo, iako pistolj iz koga je pucano, nikada nije pronadjen. Njegov rad je za vreme njegovog zivota bio poznat samo nekolicini ljudi, a samo par ga je cenilo i postovalo.");
    }
    
    else if(strcmp(kod, "Merlin Monro")==0) {
    printf("\nMerilin Monro (engl. Marilyn Monroe), rodjena kao Norma Dzin Mortenson (engl. Norma Jeane Mortenson; Los Andeles, 1. jun 1926 — Los Andjeles, 5. avgust 1962), bila je americka filmska glumica, pevacica, model i zabavljacica. Filmsku karijeru je pocela 1947. malim ulogama; 1950. privukla je paznju publike i kriticara sporednom ulogom u kultnom filmu Sve o Evi, sa Beti Dejvis u glavnoj ulozi. Tri godine kasnije igrala je glavnu ulogu u ljubavnoj drami Nijagara. Premda su njeni filmovi najcesce bili komercijalni, ali ne i kriticki hitovi, Monro je bila jedna od najvecih filmskih zvezda pedesetih godina 20. veka.");
    }
    
    else if(strcmp(kod, "Al Kapone")==0) {
    printf("\nAlfons Gabrijel Al Kapone (engl. Alphonse Gabriel Al Capone;  Njujork, 17. januar 1899 — Majami Bic, 25. januar 1947) bio je americki gangster i biznismen koji je stekao slavu tokom prohibicije u SAD kao saosnivaca i sefa cikaske mafije. Njegova sedmogodišnja vladavina kao sef organizacije organizovanog kriminala zavrsila je kada je imao 33 godine. Alfons Gabrijel Kapone je roden, kao cetvrto dete italijanske emigrantske porodice, 17. januara 1899. godine u Bruklinu. Njegovi roditelji su bili italijanski imigranti Gabriel Kapone (1865–1920) i Tereza Kapone (devojacki Rajola; 1867–1952). Njegovo otac je bio berberin, a njegova majka je bila svalja. Oboje su rodeni u Angri, gradu u okrugu Selerno.");
    }
    
    else if(strcmp(kod, "Kristofer Kolumbo")==0) {
    printf("\nKristifor Kolumbo (ital. Cristoforo Colombo, sp. Cristobal Colon, port. Cristovao Colombo), rodjen izmedu oktobra 1450. i oktobra 1451, umro 20. maja 1506. godine. Bio je trgovac i moreplovac iz Djenove koji je postao prvi konkistador Novog sveta. Kao preduzimljivi trgovac, trazio je puteve koji bi mu omogucili pristup dragocenim metalima i luksuznoj robi. Od 1492. do 1504. imao je cetiri putovanja u Novi svet, gde su njegovi ljudi od trgovaca i mornara, preko noci postali osvajaci i kolonisti. Pribavili su Spaniji ogromnu i bogatu oblast sa druge strane okeana i obelezili granice carstva koje je bilo skoro dva puta vece od Evrope.");
    }
    
    else if(strcmp(kod, "Kristofor Kolumbo")==0) {
    printf("\nKristifor Kolumbo (ital. Cristoforo Colombo, sp. Cristobal Colon, port. Cristovao Colombo), rodjen izmedu oktobra 1450. i oktobra 1451, umro 20. maja 1506. godine. Bio je trgovac i moreplovac iz Djenove koji je postao prvi konkistador Novog sveta. Kao preduzimljivi trgovac, trazio je puteve koji bi mu omogucili pristup dragocenim metalima i luksuznoj robi. Od 1492. do 1504. imao je cetiri putovanja u Novi svet, gde su njegovi ljudi od trgovaca i mornara, preko noci postali osvajaci i kolonisti. Pribavili su Spaniji ogromnu i bogatu oblast sa druge strane okeana i obelezili granice carstva koje je bilo skoro dva puta vece od Evrope.");
    }
    
    else if(strcmp(kod, "Ludvig van Betoven")==0) {
    printf("\nLudvig van Betoven (nem. Ludwig van Beethoven; Bon, 17. decembar 1770 — Bec, 26. mart 1827) je bio nemacki kompozitor, nadmocna muzicka figura u prelaznom periodu izmedu ere klasicizma i romantizma. Rodjen je u Bonu u Nemackoj, od oca Johana van Betovena (1740—1792), flamanskog porekla, i majke Magdalene Keverik van Betoven (1747—1787). Njegov otac je radio kao muzicar na dvoru u Bonu. Pre njega kompozitori su pisali dela za verske obrede i da zabave ljude. On je pravio muziku nezavisniju od drustvenih ili religioznih namena.");
    }
    
    else if(strcmp(kod, "Betoven")==0) {
    printf("\nLudvig van Betoven (nem. Ludwig van Beethoven; Bon, 17. decembar 1770 — Bec, 26. mart 1827) je bio nemacki kompozitor, nadmocna muzicka figura u prelaznom periodu izmedu ere klasicizma i romantizma. Rodjen je u Bonu u Nemackoj, od oca Johana van Betovena (1740—1792), flamanskog porekla, i majke Magdalene Keverik van Betoven (1747—1787). Njegov otac je radio kao muzicar na dvoru u Bonu. Pre njega kompozitori su pisali dela za verske obrede i da zabave ljude. On je pravio muziku nezavisniju od drustvenih ili religioznih namena.");
    }
    
    else if(strcmp(kod, "Abraham Linkoln")==0) {
    printf("\nAbraham Linkoln (engl. Abraham Lincoln; Hodzenvil, Kentaki, 12. februar 1809 — Vasington, 15. april 1865) je bio americki drzavnik, advokat i sesnaesti predsednik SAD od 1861. do njegove smrti 1865. godine. Rodjen je u siromasnoj familiji, a u mladosti je dobio dozvolu da se u drzavi Ilinois bavi advokaturom, iako nije imao zavrsenu ni osnovnu skolu. Politikom se bavio od 1832. a 1856. prikljucio se republikanskoj stranci, osnovanoj zato da bi se suprotstavila sirenju ropstva medu novoprikljucenim drzavama SAD.");
    }
    
    else if(strcmp(kod, "Vuk Karadzic")==0) {
    printf("\nVuk Stefanovic Karadžic (Trsic, 6. novembar 1787 — Bec, 7. februar 1864) bio je prvi srpski lingvista u 19. veku, reformator srpskog jezika, sakupljac narodnih umotvorina i pisac prvog recnika srpskog jezika. Vuk je najznacajnija licnost srpske knjizevnosti prve polovine XIX veka. Rodjen u vreme zlo i mucno, u dane kada se cinjase da je skoro ugasen zivot srpskog naroda. Vuk je stao na snagu u vreme junacko. Stekao je i nekoliko pocasnih doktorata. Imao je nekoliko brace i sestara koji su umrli. U tadasnje vreme se verovalo da je to zbog duhova i vestica. Posle smrti dosta njegove brace, njegovi roditelji su mu dali ime Vuk da bi to ime oteralo duhove i vestice.");
    }
    
    else if(strcmp(kod, "Vuk Stefanovic Karadzic")==0) {
    printf("\nVuk Stefanovic Karadžic (Trsic, 6. novembar 1787 — Bec, 7. februar 1864) bio je prvi srpski lingvista u 19. veku, reformator srpskog jezika, sakupljac narodnih umotvorina i pisac prvog recnika srpskog jezika. Vuk je najznacajnija licnost srpske knjizevnosti prve polovine XIX veka. Rodjen u vreme zlo i mucno, u dane kada se cinjase da je skoro ugasen zivot srpskog naroda. Vuk je stao na snagu u vreme junacko. Stekao je i nekoliko pocasnih doktorata. Imao je nekoliko brace i sestara koji su umrli. U tadasnje vreme se verovalo da je to zbog duhova i vestica. Posle smrti dosta njegove brace, njegovi roditelji su mu dali ime Vuk da bi to ime oteralo duhove i vestice.");
    }
    return 0;
}
