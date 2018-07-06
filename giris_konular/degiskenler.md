### Bu Bölümde Değişkenlere, Veri Tiplerine, Kaçış Dizgeleri ve Sabitlere Değineceğiz

#### Değişkenler ve Veri Tipleri

Değişkenler programda içinde veri saklayabileceğimiz yapılardır. Mesela öğrencilerin notlarını tutacak bir program yazmak isterseniz
bu notları bir değişkende tutmanız gerekir. Bu değişkenin bir tipi olması gerekir. Şimdi tiplerin bize ne ifade ettiğinden bahsedelim.

Tipin Adı | Boyut
--------- | -----
char | 8 bit
int | 16 bit
float | 32 bit
double | 64 bit
bool | 1 bit
string | Verilen Değere Göre Değişkenlik Gösterir

Üsttekiler en sık kullanılan veri tipleridir. Detaylı bilgi için [şurayı](http://www.cplusplus.com/doc/tutorial/variables/) inceleyebilirsiniz.

**Kullanım:**

```c++
#include <iostream>
#include <string> //string kullanabilmek için 

using namespace std;

int main()
{
    int tamsayi;
    float ondalikliSayi;
    double toplam;
    char karakter;
    string yazi;

    // Değişken atamaları bu şekilde yapılır ve tipleri sol tarafa isimleri sağ tarafa yazılır.
}
```

```c++
#include <iostream>

using namespace std;

int main()
{
    int sayi1 = 3;
    int sayi2 = 2;
    int toplam;

    toplam = sayi1 + sayi2;

    cout << "Sayilarin Toplami: " << toplam << endl;
}
```

**Ekran Çıktısı:**

```
Sayilarin Toplami: 5
```

```c++
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mesaj;
    mesaj = "C++ Cok Keyifli :)";

    cout << mesaj << endl;
}
```

**Ekran Çıktısı:**

```
C++ Cok Keyifli :)
```

#### Kaçış Dizgeleri

İfade | Açıklama
----- | --------
\a | Ses veya görünebilir uyarı üretir
\b | İmleci bir sütun (pozisyon) geri kaydırır
\f | İmleci bir sonraki sayfanın ilk pozisyonuna kaydırır
\n | Yeni satıra geçer
\t | İmleci bir tab boşluğu yatayda ileri kaydırır
\v | İmleci bir tab boşluğu dikeyde aşağı kaydırır
\' | Tekli tırnak oluşturur
\" | Çiftli tırnak oluşturur
\? | Soru işareti oluşturur
\\ | Ters taksim oluşturur
\0 | Boş karakter oluşturur

Programınızda gerektiği yerlerde kolaylıklar sağlar.

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Yatayda \t bosluk biraktim ve \n alt satira gectim" << endl;
}
```
**Ekran Çıktısı:**

```
Yatayda     bosluk biraktim ve
alt satira gectim
```

#### Sabitler

Programınızda bazı değerleri sabit kalması değişmemesi gerekir. Yukarıda öğrendiğimiz değişkenlere yeni atamalar yapabiliriz ancak sabitler 
adından anlaşılacağı gibi değiştirilemezler. Ufak bir örnek üzerinden daha iyi anlayabiliriz.

```c++
#include <iostream>

using namespace std;

const double pi = 3.14159;
const char yeniSatir = '\n';

int main()
{
    double yariCap = 5.0;
    double daire;

    daire = 2 * pi * yariCap;
    
    cout << "Dairenin Cevresi: " << yeniSatir;
    cout << daire << yeniSatir;
}
```

**Ekran Çıktısı:**

```
Dairenin Cevresi: 
31.4159
```

Örnekte görüldüğü gibi pi değeri sabittir ve değiştirilemez.