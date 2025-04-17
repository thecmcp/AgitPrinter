// code based on A_printertest.ino example from Adafruit Thermal Printer library

#include "Adafruit_Thermal.h"
#include "silslogo.h"
#include "silsqr.h"



#include "SoftwareSerial.h"
#define TX_PIN 11 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 10 // Arduino receive   GREEN WIRE   labeled TX on printer

#define BUTTON_PIN 5 // Button connected to pin 5


SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor

bool hasPrinted = false;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP)

  mySerial.begin(19200);
  printer.begin();
  printer.setDefault();


  printer.sleep();
  delay(30000L);
  printer.wake();
  printer.setDefault();
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW&& !hasPrinted) {
    hasPrinted = true;
    printReceipt();
  }

  if (digitalRead(BUTTON_PIN) == HIGH) {
    hasPrinted = false;
  }
}

void printReceipt() {
 printer.justify('C');

  printer.printBitmap(silslogo_width, silslogo_height, silslogo_data);
  printer.println("");
  // printer not strong enough to print long width of color

  printer.setSize('S'); // small size
  printer.justify('L'); // left justify
  printer.println("   DATE:         04/18/2025");
  printer.println("   TIME:         1PM - 5PM");
  printer.println("   LOCATION:     THE FENCE");
  printer.println("");


  printer.setFont('A'); // regular font
  printer.setSize('L'); // large size
  printer.justify('C'); // center justify
  printer.println(F("NIKE, WE HAVE"));
  printer.println(F("YOUR RECEIPTS"));

  printer.setSize('S'); // smaller font
  printer.justify('L'); // left justified
  // 
  printer.println("");
  printer.setFont('B'); // change font type
  printer.setSize('M'); // medium font
  printer.println("   WAGES STOLEN:         +$600,000");
  printer.println("   INTEREST ACCRUED:     +$300,000");
  printer.println("   ADMITTED DAMAGES      -$211,000");
  printer.println("   BALANCE OWED:           $689,000");
  printer.println("   DELINQUENCY PERIOD:   4+ YEARS");
  printer.println("   WORKERS AFFECTED:     3,300");
  printer.println("");
  
  printer.setFont('A'); // change font type
  printer.println("SIGN THE PETITION TO");
  printer.println("PRESSURE CMU ADMIN");
  printer.printBitmap(silsqr_width, silsqr_height, silsqr_data); // qr code
  printer.println("");
  printer.setSize('S'); // set to small font size
  // qr code sometimes doesn't scan with phone
  printer.println("linktr.ee/cmusils");
  printer.println("");
  printer.println("");

  printer.sleep();
  delay(30000L);
  printer.wake();
  printer.setDefault();
}
