#include <stdio.h>
#include <math.h>   // round fonksiyonunu kullanabilmek için
int main(){
    
    //1.KURAL
    //ürünün tutarını ve odenen parayı float olarak tutuyoruz
    float urun_tutari, odenen_para;
    
    printf("urun tutarini giriniz(TL):  ");
    scanf("%f",&urun_tutari);

    printf("odenen parayi giriniz(TL):  ");
    scanf("%f",&odenen_para);

    //HATA KONTROL
    //ödenen paranın eksik olması durumunda işlemin hatalı olduğunu bildirmeli.
    if(odenen_para < urun_tutari) {
    printf("odenen para tutari yetersiz!\n");
    return 0;
    }
    //3.KURAL
    //daha hassas sonuç için round() fonksiyonu kullanıyoruz
    float tl_fark = odenen_para - urun_tutari;
    //round kullanarak kuruşa çevirme
    int kurus_toplam = (int)round(tl_fark * 100);

    printf("\n____PARA USTU BILGISI____\n");
    printf("Toplam para ustu (kurus cinsinden): %d kurus \n",kurus_toplam);

    int kalan_para = kurus_toplam;   //kalan_para değişkeni müşteriye verilecek olan parayı ifade eder.
    int toplam_kupur_sayisi = 0;     //toplam küpür sayısı başlangıçta 0 dır ancak ileriki işlemlerde adım adım artar.
    int adet = 0;                    //müşteriye verilecek para adetidir.

    //200 TL = 20000 kuruş
    adet = kalan_para / 20000;       //Eldeki toplam kalan kuruşun içinde kaç 20000 kuruş (200 tl) olduğunu bulmak için.
    kalan_para = kalan_para % 20000; // mod alma ile 200 lükleri verdikten sonra geriye ne kadar kaldığını hesaplıyoruz ve kalan_para değişkenini güncelliyoruz
    toplam_kupur_sayisi += adet;     //başlangıçta 0 olan küpür sayısına para adeti ekleme yapıyoruz(küpür sayısını güncelliyoruz).
    if (adet > 0) printf("%d adet 200 TL\n", adet);  //para adeti 0 dan büyükse kaç adet 200 tl vermek gerektiğini yazıyoruz.


    //            200 tl de uygulanan mantığı diğer banknot ve madeni paralara da uyguluyoruz

    //100 TL = 10000 kuruş
    adet = kalan_para / 10000;
    kalan_para =kalan_para % 10000;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 100 TL\n", adet);

    //50 TL = 5000 kuruş
    adet = kalan_para / 5000;
    kalan_para =kalan_para % 5000;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 50 TL\n", adet);

    //20 TL = 2000 kuruş
    adet = kalan_para / 2000;
    kalan_para =kalan_para % 2000;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 20 TL\n", adet);

    //10 TL = 1000 kuruş
    adet = kalan_para / 1000;
    kalan_para =kalan_para % 1000;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 10 TL\n", adet);

    //5 TL = 500 kuruş
    adet = kalan_para / 500;
    kalan_para =kalan_para % 500;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 5 TL\n", adet);

    //1 TL = 100 kuruş
    adet = kalan_para / 100;
    kalan_para =kalan_para % 100;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 1 TL\n", adet);

    // 50 Kuruş
    adet = kalan_para / 50;
    kalan_para = kalan_para % 50;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 50 Kurus\n", adet);

    // 25 Kuruş
    adet = kalan_para / 25;
    kalan_para = kalan_para % 25;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 25 Kurus\n", adet);

    // 10 Kuruş
    adet = kalan_para / 10;
    kalan_para = kalan_para % 10;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 10 Kurus\n", adet);

    // 5 Kuruş
    adet = kalan_para / 5;
    kalan_para = kalan_para % 5;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 5 Kurus\n", adet);

    // 1 Kuruş
    adet = kalan_para / 1;
    kalan_para = kalan_para % 1;
    toplam_kupur_sayisi += adet;
    if (adet > 0) printf("%d adet 1 Kurus\n", adet);

    //2.KURAL
    // Toplam küpür sayısını yazdırıyorum
    printf("\nMusteriye verilen TOPLAM kupur ve madeni para sayisi: %d\n", toplam_kupur_sayisi);

    return 0;

}