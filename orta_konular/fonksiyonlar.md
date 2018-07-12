### Fonksiyonlar

Bir programın içinde birden fazla aynı işlem uygulanıyor ise (20 defa karekök alma vb.)
bunu elimizle sürekli yazmamız saçma ve zahmetli olur. Bu tip işler için **fonksiyonlar**
ortaya çıkmıştır. Fonksiyonlar programı parçalara ayırır ve işlem kolaylığı sağlar.

```c++
#include <iostream>

using namepsace std;

int toplama(int sayi1, int sayi2)
{
    int toplam;
    toplam = sayi1 + sayi2;
    return toplam;
}

int main()
{
    int a;
    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;
}
```

**Ekran Çıktısı:**

```
Toplam: 7
```

Örneği adım adım anlatalım. **main** kısmı tüm fonksiyonlarımızın çalıştığı yerdir. Bizim
ana fonksiyonumuzdur. **main** fonksiyonunda **toplama** fonksiyonunu çağırıyoruz. **Toplama** 
fonksiyonunun yapısı **int toplama(int sayi1, int sayi2)** şeklindedir. Bunu biraz açalım.

Baştaki **int** fonksiyonun bize geri döndüreceği tipi belirtir. **toplama** fonksiyonun ismini belirtir.
Parantez içindeki değerler ise fonksiyona vereceğimiz değişkenleri belirler.

```c++
#include <iostream>

using namepsace std;

int toplama(int, int); //Fonksiyon prototipi

int main()
{
    int a;
    a = toplama(4, 3);

    cout << "Toplam: " << a << endl;
}

int toplama(int sayi1, int sayi2)
{
    int toplam;
    toplam = sayi1 + sayi2;
    return toplam;
}
```

**Ekran Çıktısı:**

```
Toplam: 7
```

Arkadaşlar bu kod diğeri ile aynı işi yapar. Fark ise kodunuzun daha okunaklı olması için **toplama** fonksiyonu
 **main** fonksiyonunun altına yazılmıştır. Yorum satırı ile belirtilen **Fonksiyon Prototipi** ise bize kodu 
 incelerken programda kullandığımız fonksiyonun ismini, dönüş tipini, aldığı **parametreleri** (sayi1, sayi2)
 gösterir. Böylece kod daha okunaklı bir hale gelmiş olur.