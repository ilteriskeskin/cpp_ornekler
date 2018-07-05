## Derleyici ve Editör Nedir?

### Derleyici: 

Bilgisayarlar yalnızca tek bir dili anlar. Bu dil 1 ve 0 lardan oluşur. Bilgisayarların anladığı
bu dile makine dili adı verilir. Makine dili ile yazılmış bir kodu okumak veya makine dili ile yazmak
oldukça zahmetlidir. Bu yüzden yüksek seviyeli diller geliştirilmiştir. Bu dillerin özelliği anlaşılması
ve yazılması kolay olmasıdır. Bu dillerin makine diline çevrilerek bilgisayarın anlaması için ise 
derleyiciler geliştirilmiştir. 
**Derleyici yazılan programın makine diline dönüştürülmesi işine yarar.** 

**Önerilen Derleyiciler**

Derleyici | Platform | Komut
--------- | -------- | -----
GCC       | GNU/Linux ve Diğerleri | g++ -std=c++0x ornek.cpp -o ornek
Clang     | OS X ve Diğerleri      | clang++ -std=c++11 -stdlib=libc++ ornek.cpp -o ornek

### Editör ve IDE:

Editörler yazı yazmamıza yarayan araçlardır. Sonraları gelişerek (eklentiler vs.) kod yazmamızı
kolaylaştıracak eylemlerde bulunmuşlardır.

IDE ise direkt derleyici ile entegre gelen, hata ayıklama yapmamızı sağlayan, otomatik düzeltme/tamamlama
yapan araçlardır.

Ben editör olarak Visual Studio Code, derleyici olarak gcc kullanmaktayım. Tabii siz nasıl rahat ediyorsanız
onu kullanın.

**Önerilen IDE'ler**

IDE | Platform
--- | --------
Code::blocks  | GNU/Linux/Windows/OS X
Dec-C++       | Windows
Visual Studio | Windows