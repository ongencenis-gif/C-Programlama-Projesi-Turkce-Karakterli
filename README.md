
Bu proje, C programlama dili kullanılarak Windows platformu için geliştirilmiş bir konsol uygulamasıdır. Temel amacı, Windows konsolunda sıkça karşılaşılan **Türkçe karakter (ş, ı, ğ, ç, ö, ü)** bozulma sorununu UTF-8 kod sayfası kullanarak aşmak ve kullanıcıyı profesyonel bir mesajla karşılamaktır.

---

## 💻 Geliştirme ve Çalıştırma Ortamı

Bu proje, yüksek performanslı bir sistem üzerinde geliştirilmiş ve optimize edilmiştir.

### 🛠️ Yazılım Araçları
* **İşletim Sistemi:** Windows 11
* **IDE (Geliştirme Ortamı):** JetBrains CLion
* **Programlama Dili:** C (C99/C11 Standartları)
* **Derleme Sistemi (CMake):** Proje dosyalarını organize eden ve derleme sürecini yöneten "orkestra şefi" sistemidir.

### 🖥️ Donanım Özellikleri (Game Garaj Slayer)
* **Ekran Kartı:** NVIDIA GeForce RTX 5070
* **Bellek (RAM):** 32 GB
* **Depolama:** 1 TB NVMe SSD
* **Cihaz Modeli:** Game Garaj Slayer Serisi

---

## ⚙️ Teknik Detaylar: Türkçe Karakter Çözümü

Windows konsol ekranı (CMD) varsayılan olarak Türkçe karakterleri doğru göstermeyebilir. Bu projede bu sorunu çözmek için şu adımlar izlenmiştir:

1.  **Kütüphane:** Windows API fonksiyonlarına erişmek için `<windows.h>` kütüphanesi dahil edilmiştir.
2.  **Kod Sayfası:** `main` fonksiyonu içerisinde `SetConsoleOutputCP(65001);` komutu kullanılmıştır. 
    > **Bilgi:** `65001`, Windows üzerinde **UTF-8** karakter kodlamasını temsil eder. Bu sayede `printf` içindeki harfler bozulmadan ekrana yansıtılır.

---

## 🚀 Kurulum ve Çalıştırma

1.  Projeyi **CLion** üzerinden açın.
2.  CLion'ın `CMakeLists.txt` dosyasını otomatik olarak okumasını bekleyin.
3.  Sağ üst köşedeki yeşil **Run** (Çalıştır) butonuna basın veya `Shift + F10` kısayolunu kullanın.
4.  Program derlendikten sonra çıktı ekranın altındaki konsol panelinde görüntülenecektir.

