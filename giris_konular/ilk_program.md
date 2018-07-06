### Hazırsak İlk Programımızı Yazalım

```c++
#include <iostream>

int main()
{
    std::cout << "Merhaba C++";
}
```

Bu kodu satır satır inceleyelim.

* Birinci satırda **include** ifadesi kütüphaneleri programımıza eklemeye yarar. Yani ilk satırda **iostream** kütüphanesini ekledik.
Bu kütüphane standart giriş çıkış kütüphanesidir. Kullanıcıdan veri alma veya kullanıcıya veri göstermeye yarar.
* İkinci satırda **int main()** ifadesi bizim kodumuzun çalışacağı ana bölümdür. Bu kısımla ilgili ileride daha fazla anlatım yapılacaktır.
* Üçüncü ve Beşinci satırlar main kısmının parantezleridir. Bunlar zorunlu parantezlerdir. Kodlarımız bunlar arasında yazılmalıdır.
* Dördüncü satırda **std::cout** standart veri çıkışı (kullanıcıya bilgi göstermek) için kullanılır. << ifadesi yazılanların **cout**'a
eklendiğini belirtir. Ve ifademiz "çift tırnak içinde yazılmalıdır." **Noktalı Virgül (;)** ise c++ dilinde o satırın sonlandığını belirten
bir işarettir. Kullanılması zorunludur. Unutulması halinde derleyici hata verir. 

**Üstteki kod parçasını okunaklı olsun diye o şekilde yazdık. İsteğinize göre main bölümünü tek satırda da yazabilirsiniz.**

```c++
#include <iostream> 
int main () { std::cout << "Merhaba C++"; }
```

Artık std::cout ifadesindeki std komutunu kullanmayacağız. Yeni bir şey olan **using namespace std** isim uzayını göreceğiz.

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Merhaba C++"";
    cout << "Programlama Cok Zevkli";
}
```

**Ekran Çıktısı:**

```
Merhaba C++Programlama Cok Zevkli
```

* İlk olarak **using namespace std** ifadesi bir isim uzayıdır ve her fonksiyonun başına std:: yazma zahmetinden sizi kurtarır.
* İkinci olarak burada bir sorun var. Alt satıra geçemedik ve bitişik yazdık iki cümleyi.
* Üçüncü olarak Türkçe karakter kullanmıyoruz. Yoksa hata alırız. Elbet çözümü var ve oldukça kolay. Araştırma yapmaya elinizin alışması için sizin
arayıp bulmanızı istiyorum.

**Alt Satıra Geçmek**

Bunun birden fazla yolu var. Örneğimizi inceleyelim.

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Merhaba C++" << endl;
    cout << "Programlama Cok Zevkli \n";
    cout << "Alt satira geciyoruz";
}
```

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Merhaba C++" << endl << "Programlama Cok Zevkli \n" << "Alt satira geciyoruz";
}
```

Üstteki iki kod parçası aynı çıktıyı verecektir bize. yani **endl ve \n** ifadeleri aynı işi görüyor.

**Ekran Çıktısı:**

```
Merhaba C++
Programlama Cok Zevkli
Alt satira geciyoruz
```

**Yorum Satırları**

Yorum satırları programda bir şey anlatacağımız zaman veya bir şey ifade edeceğimiz zaman kullandığımız, programın çalıştırmadığı
satırlardır.

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Merhaba C++" << endl; // Tekli Yorum Satırı Yazıyoruz
    /*
    Çoklu
    Yorum
    Satırı
    Yazıyoruz
    */
}
```

**Ekran Çıktısı:**

```
Merhaba C++
```

Gördüğünüz gibi yorum satırlarının programımıza hiçbir etkisi olmadı. 