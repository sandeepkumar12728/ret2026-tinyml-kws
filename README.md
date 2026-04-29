# Ret2026-TinyML-KWS

**Official implementation for IEEE RET2026 paper**

**Title**: Real-Time Keyword Spotting on ESP32 using EON-Optimized TinyML: A 50ms Button-Triggered LED Control with 15.8KB RAM

**Authors**: Dr. Hameed Pasha Mohammad, Gorre Sandeep

**Conference**: RET2026 - Jayamukhi Institute of Technological Sciences, Warangal

**Paper Status**: Under Review - Submission ID: 22

## 🎯 Results - Button Validation

| Metric | Value |
| --- | --- |
| **Accuracy** | 96.48% on test set - 6,098 samples |
| **DSP Latency** | 47ms |
| **Classification** | 3ms |
| **Total Latency** | 50ms TFLite inference |
| **RAM Usage** | 15.8 KB Peak |
| **Model Size** | 70 KB INT8 quantized |
| **Model Params** | 13,230 parameters |
| **Hardware** | ESP32 DevKit V1 - $3 USD |
| **Features** | MFCC 13 coeffs, 650 features per 1s window |

## 📁 Files

- `RET2026_Button_KWS.ino` - Main Arduino sketch with button validation
-  `firmware/sandeepkumar12728-project-1_inferencing.h`- Edge Impulse library
- `docs/RET2026_Paper.pdf` - Final 5-page IEEE paper

## 🚀 How to Run

1. **Install Arduino IDE** + ESP32 board package
2. **Install Edge Impulse library**: Download from Edge Impulse Studio → Deployment → Arduino library → Add `.ZIP Library` in Arduino IDE
3. **Upload** `RET2026_Button_KWS.ino` to ESP32
4. **Open Serial Monitor** at 115200 baud
5. **Press BOOT button** - GPIO0 = "yes" → LED ON
6. **Touch GPIO4 to GND** = "no" → LED OFF  
7. **Output**: DSP: 47ms, Classification: 3ms - matches paper Fig. 2

## 📊 Validation Method

**Button-Triggered Validation**: This implementation uses GPIO buttons to simulate 
keyword events for reproducible latency measurement. End-to-end latency with 
analog microphone is estimated at 173ms including MFCC computation overhead.

**Dataset**: 6,098 audio samples - 4,878 training, 1,220 testing

## 📝 Citation

```bibtex
@inproceedings{sandeep2026tinyml,
  title={Real-Time Keyword Spotting on ESP32 using EON-Optimized TinyML: A 50ms Button-Triggered LED Control with 15.8KB RAM},
  author={Mohammad, Hameed Pasha and Sandeep, Gorre},
  booktitle={RET2026 IEEE Conference},
  year={2026}
}
### Dependencies
Install Edge Impulse library via Arduino IDE:
`Sketch → Include Library → Add .ZIP Library`
