# Akıllı Hava Kalitesi Ölçüm Cihazı - Adım 1

Bu proje, **Arduino UNO** kullanılarak basit bir şekilde **sıcaklık ve nem ölçümü** yapar.  
Ölçülen değerlere göre LED'ler yanar ve kritik durumlarda buzzer ile uyarı verir.  
Bu, ileride daha gelişmiş sensörler (PM2.5, CO₂, OLED ekran, Wi-Fi) eklemek için **ilk adım** olarak tasarlanmıştır. 🚀

---

## 🔧 Donanım Listesi
- Arduino UNO R3 (CH340)
- DHT11 sıcaklık/nem sensörü
- 3 adet LED (Yeşil, Sarı, Kırmızı)
- 3 adet 220Ω direnç
- Aktif buzzer
- Jumper kablolar
- Breadboard

---

## 🔌 Devre Şeması

<img width="1536" height="598" alt="Swanky Stantia-Bojo" src="https://github.com/user-attachments/assets/71d2fb32-ab94-4719-954d-b6ac1b3ce42a" />



---

## 🖥️ Kurulum
1. Arduino IDE’yi indir ve kur: [Arduino IDE](https://www.arduino.cc/en/software)  
2. **Kütüphane Kurulumu**  
   - `DHT sensor library by Adafruit`
   - `Adafruit Unified Sensor`  
3. Bu repo içindeki `hava_kalitesi_adim1.ino` dosyasını Arduino IDE ile aç.  
4. Kodu **Arduino UNO**'ya yükle.  

---

## ▶️ Kullanım
- Seri Monitör üzerinden sıcaklık ve nem değerlerini görebilirsiniz.  
- **Normal değerler** → Yeşil LED yanar.  
- **Uyarı eşiği** (ör. nem > 70% veya sıcaklık > 30°C) → Sarı LED yanar.  
- **Kritik değerler** (ör. nem > 80% veya sıcaklık > 35°C) → Kırmızı LED yanar ve buzzer ses çıkarır.  

---



## 📈 Gelecek Adımlar
- PM2.5 sensörü (PMS5003 veya SDS011) eklenerek **hava kirliliği ölçümü**
- CO₂ sensörü eklenerek **havalandırma ihtiyacının belirlenmesi**
- OLED ekran ile anlık değer gösterimi
- ESP32 ile Wi-Fi bağlantısı ve mobil dashboard entegrasyonu

---

## 📝 Lisans
Bu proje MIT lisansı altında paylaşılmaktadır.  
Dilediğiniz gibi kullanabilir, geliştirebilir ve paylaşabilirsiniz.
