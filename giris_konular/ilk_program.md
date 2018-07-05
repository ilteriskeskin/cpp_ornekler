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