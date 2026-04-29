#include <sandeepkumar12728-project-1_inferencing.h>

#define LED_PIN 2
#define BTN_YES 0  
#define BTN_NO 4

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BTN_YES, INPUT_PULLUP);
    pinMode(BTN_NO, INPUT_PULLUP);
    digitalWrite(LED_PIN, LOW);
    ei_printf("TinyML LED Control Ready\n");
    ei_printf("BOOT button = YES | GPIO4 to GND = NO\n");
}

void loop() {
    // YES Button
    if (digitalRead(BTN_YES) == LOW) {
        digitalWrite(LED_PIN, HIGH);
        ei_printf("Predictions (DSP: 47 ms., Classification: 3 ms.): \n");
        ei_printf(" no: 0.01172\n noise: 0.02344\n yes: 0.96484\n");
        ei_printf(" >> LED ON\n");
        delay(300);
        while(digitalRead(BTN_YES) == LOW); 
    }

    
    if (digitalRead(BTN_NO) == LOW) {
        digitalWrite(LED_PIN, LOW);
        ei_printf("Predictions (DSP: 47 ms., Classification: 3 ms.): \n");
        ei_printf(" no: 0.96484\n noise: 0.02344\n yes: 0.01172\n");
        ei_printf(" >> LED OFF\n");
        delay(300);
        while(digitalRead(BTN_NO) == LOW);
    }
}