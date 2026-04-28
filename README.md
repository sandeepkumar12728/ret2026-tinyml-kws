# Ret2026-TinyML-KWS

Official implementation for IEEE RET2026 paper: 
**"Real-Time Keyword Spotting on ESP32 for IoT Applications"**

## 🎯 Results - Button Validation
- **Accuracy:** 96.48% on test set
- **DSP Latency:** 47ms 
- **Classification:** 3ms
- **Total Latency:** 50ms
- **RAM:** 15.8 KB
- **Model Size:** 70 KB INT8 quantized
- **Hardware:** ESP32 DevKit V1 + GPIO Buttons

## 📁 Files
- `RET2026_Button_KWS.ino` - Main Arduino sketch with button validation
- `sandeepkumar12728-project-1_inferencing.h` - Edge Impulse library

## 🚀 How to Run
1. Install Arduino IDE + ESP32 board package
2. Install Edge Impulse library: `sandeepkumar12728-project-1_inferencing.zip`
3. Upload `RET2026_Button_KWS.ino` to ESP32
4. Open Serial Monitor at 115200 baud
5. Press BOOT button (GPIO0) = "yes" → LED ON
6. Touch GPIO4 to GND = "no" → LED OFF
7. Output: `DSP: 47ms, Classification: 3ms` - matches paper Fig. 2

## ⚡ Validation Method
Button triggers use pre-computed features to isolate TFLite inference latency.
This benchmarks pure model speed at 50ms total. Full analog microphone
integration adds MFCC computation overhead and is planned for future work.

## 📄 Citation
If you use this code, please cite:
G. Sandeep, H. P. Mohammad, "Real-Time Keyword Spotting on ESP32 for 
IoT Applications," IEEE RET2026, 2025.

## 📧 Contact
Gorre Sandeep - sandeepgorre5@gmail.com
