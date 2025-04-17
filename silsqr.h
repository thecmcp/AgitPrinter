
// code from Adafruit Thermal Printer Library example
// QR code genreated from app.qr-code-generator.com 
// **Best if URL is short to make QR code less complex
// bitmap created using javl.github.io/image2cpp/
// image size set to 135 x 135 using Photoshop
// Background color: white
// **Invert image colors box is checked. Doesn't properly if not checked
// Code output format: Arduino Code
// Generate code and format similarly to below 

#ifndef _silsqr_h_
#define _silsqr_h_

#define silsqr_width 135
#define silsqr_height 135

// '184_sils', 144x100px
static const uint8_t PROGMEM silsqr_data[]  = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0x00, 0x00, 0x1f, 
	0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0x00, 0x00, 
	0x1f, 0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0x00, 
	0x00, 0x1f, 0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 
	0x00, 0x00, 0x1f, 0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x3f, 0x00, 0x00, 0x1f, 0x03, 0x81, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x0f, 
	0x83, 0xff, 0x0f, 0xff, 0xff, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x03, 0xe0, 0x00, 0x00, 
	0x0f, 0x83, 0xff, 0x0f, 0xff, 0xff, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x03, 0xe0, 0x00, 
	0x00, 0x0f, 0x83, 0xff, 0x0f, 0xff, 0xff, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x03, 0xe0, 
	0x00, 0x00, 0x0f, 0x83, 0xfe, 0x0f, 0xff, 0xff, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x03, 
	0xe0, 0x7f, 0xfc, 0x0f, 0x80, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xf0, 0x3f, 0xfc, 0x0f, 0x80, 
	0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xf0, 0x7f, 0xfe, 0x0f, 
	0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xf0, 0x7f, 0xfe, 
	0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xf0, 0x7f, 
	0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xf0, 
	0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x0f, 0x81, 0xe0, 0xff, 0xc1, 
	0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xfe, 0x0f, 0x83, 0xe0, 0xff, 
	0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x0f, 0x83, 0xe0, 
	0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x0f, 0x83, 
	0xe0, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x0f, 
	0x83, 0xe0, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 0x01, 
	0xf0, 0x7c, 0x00, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x80, 
	0x01, 0xf0, 0x7c, 0x00, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 
	0x80, 0x01, 0xf0, 0x7c, 0x00, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 
	0x0f, 0x80, 0x01, 0xf0, 0x7c, 0x00, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 0xff, 
	0xfe, 0x0f, 0x80, 0x01, 0xf0, 0x7c, 0x00, 0xff, 0xc1, 0xf0, 0x7f, 0xfe, 0x0f, 0x80, 0x03, 0xe0, 
	0x00, 0x00, 0x0f, 0x83, 0xc1, 0xf0, 0x03, 0xff, 0xf8, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 0x03, 
	0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe1, 0xf0, 0x03, 0xff, 0xf8, 0x01, 0xf0, 0x00, 0x00, 0x0f, 0x80, 
	0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe1, 0xf0, 0x03, 0xff, 0xf8, 0x01, 0xf0, 0x00, 0x00, 0x0f, 
	0x80, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe1, 0xf0, 0x03, 0xff, 0xf8, 0x01, 0xf0, 0x00, 0x00, 
	0x0f, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe1, 0xf0, 0x03, 0xff, 0xf8, 0x01, 0xf0, 0x00, 
	0x00, 0x0f, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xf0, 0x7c, 0x1f, 0x07, 0xc1, 0xff, 
	0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xf0, 0x7c, 0x1f, 0x07, 0xc1, 
	0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xf0, 0x7c, 0x1f, 0x07, 
	0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xf0, 0x7c, 0x1f, 
	0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe0, 0xf0, 0x7c, 
	0x1f, 0x07, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x7c, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x7c, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x7c, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7c, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 
	0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x3e, 0x0f, 0x83, 0xc1, 0xf0, 0x00, 0x03, 0xff, 
	0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x3e, 0x0f, 0x83, 0xc1, 0xf0, 0x00, 0x03, 
	0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x3e, 0x0f, 0x83, 0xc1, 0xf0, 0x00, 
	0x03, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x3e, 0x0f, 0x83, 0xc1, 0xf0, 
	0x00, 0x03, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xf8, 0x3e, 0x0f, 0x83, 0xc1, 
	0xf0, 0x00, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x0f, 0xfc, 
	0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0xff, 0xfe, 0x0f, 
	0xfc, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0xff, 0xfe, 
	0x0f, 0xfc, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0xff, 
	0xfe, 0x0f, 0xfc, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0x00, 0x3e, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 
	0xff, 0xfe, 0x0f, 0xfc, 0x00, 0x0f, 0x80, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x1f, 0x0f, 0xff, 
	0xff, 0xf8, 0x3f, 0xf0, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x1f, 0x0f, 
	0xff, 0xff, 0xf8, 0x3f, 0xf0, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 0x1f, 
	0x0f, 0xff, 0xff, 0xf8, 0x3f, 0xf0, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0x80, 
	0x1e, 0x0f, 0xff, 0xff, 0xf8, 0x3f, 0xf0, 0x7c, 0x3e, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 
	0x80, 0x1f, 0x0f, 0xff, 0xff, 0xf8, 0x3f, 0xe0, 0x78, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x07, 0xc1, 
	0xf0, 0x7c, 0x1f, 0xff, 0x80, 0x1f, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x07, 
	0xc1, 0xf0, 0x7c, 0x1f, 0xff, 0x80, 0x1f, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 
	0x07, 0xc1, 0xf0, 0x7c, 0x1f, 0xff, 0x80, 0x1f, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x1f, 0xff, 0x80, 0x1f, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x1f, 0x87, 0xc3, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 0x1f, 0x87, 0xfe, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xf8, 0x3f, 0xff, 0x83, 0xfe, 0x0f, 0x83, 0xff, 0xf8, 0x01, 0xff, 0xff, 0xc1, 
	0xff, 0x80, 0x00, 0x1f, 0xf8, 0x3f, 0xff, 0x83, 0xff, 0x0f, 0x83, 0xff, 0xf8, 0x01, 0xff, 0xff, 
	0xc1, 0xff, 0x80, 0x00, 0x1f, 0xf8, 0x3f, 0xff, 0x83, 0xff, 0x0f, 0x83, 0xff, 0xf8, 0x01, 0xff, 
	0xff, 0xc1, 0xff, 0x80, 0x00, 0x1f, 0xf8, 0x3f, 0xff, 0x83, 0xff, 0x0f, 0x83, 0xff, 0xf8, 0x01, 
	0xff, 0xff, 0xc1, 0xff, 0x80, 0x01, 0xff, 0xf8, 0x3f, 0x00, 0x00, 0x01, 0xf8, 0x7e, 0x00, 0x07, 
	0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x3e, 0x00, 0x00, 0x01, 0xf0, 0x7c, 0x00, 
	0x07, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x3e, 0x00, 0x00, 0x01, 0xf0, 0x7c, 
	0x00, 0x07, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x3e, 0x00, 0x00, 0x01, 0xf0, 
	0x7c, 0x00, 0x07, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0xf8, 0x3e, 0x00, 0x00, 0x00, 
	0xf0, 0x7c, 0x00, 0x07, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xf0, 0xf8, 0x01, 0xff, 0x00, 
	0x1f, 0xf0, 0x03, 0xe0, 0x00, 0x3f, 0xf0, 0xfc, 0x1f, 0xff, 0x80, 0x03, 0xe0, 0xf8, 0x01, 0xff, 
	0x80, 0x1f, 0xf0, 0x03, 0xe0, 0x00, 0x3f, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 0x03, 0xe0, 0xf8, 0x01, 
	0xff, 0x80, 0x1f, 0xf0, 0x03, 0xe0, 0x00, 0x3f, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 0x03, 0xe0, 0xf8, 
	0x01, 0xff, 0x80, 0x1f, 0xf0, 0x03, 0xe0, 0x00, 0x3f, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 0x03, 0xe0, 
	0xf8, 0x01, 0xff, 0x80, 0x1f, 0xf0, 0x03, 0xe0, 0x00, 0x3f, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 0x03, 
	0xe0, 0x00, 0x3e, 0x00, 0x03, 0xe1, 0xf0, 0x3c, 0x1f, 0x00, 0x3e, 0x00, 0x00, 0x01, 0xff, 0x80, 
	0x03, 0xe0, 0x00, 0x3e, 0x00, 0x03, 0xe0, 0xf0, 0x7c, 0x1f, 0x00, 0x3e, 0x00, 0x00, 0x01, 0xff, 
	0x80, 0x03, 0xe0, 0x00, 0x3e, 0x00, 0x03, 0xe1, 0xf0, 0x7c, 0x1f, 0x00, 0x3e, 0x00, 0x00, 0x01, 
	0xff, 0x80, 0x03, 0xe0, 0x00, 0x3e, 0x00, 0x03, 0xe1, 0xf0, 0x7c, 0x1f, 0x00, 0x3e, 0x00, 0x00, 
	0x01, 0xff, 0x80, 0x03, 0xe0, 0x00, 0x3e, 0x00, 0x03, 0xe1, 0xf0, 0x7c, 0x1f, 0x00, 0x3e, 0x00, 
	0x00, 0x01, 0xff, 0x80, 0x03, 0xe0, 0x07, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x7c, 0x00, 0xff, 0xff, 
	0xff, 0xff, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x7c, 0x00, 0xff, 
	0xff, 0xff, 0xff, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x7c, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x7c, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0xc1, 0xff, 0xff, 0xff, 0x00, 
	0x7c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe1, 
	0xf0, 0x00, 0x1f, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xe1, 0xf0, 0x00, 0x1f, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x03, 0xe1, 0xf0, 0x00, 0x1f, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0xe1, 0xf0, 0x00, 0x1f, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xe1, 0xf0, 0x00, 0x1f, 0x07, 0xc0, 0x00, 0x7c, 0x00, 0x0f, 0x80, 0x01, 0xff, 
	0xff, 0xff, 0xff, 0x03, 0xe1, 0xff, 0xfc, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x1f, 0xff, 0x80, 0x03, 
	0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xff, 0xfc, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x3f, 0xff, 0x80, 
	0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xff, 0xfc, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x3f, 0xff, 
	0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xff, 0xfc, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x3f, 
	0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0x83, 0xe1, 0xff, 0xfc, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 
	0x3f, 0xff, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xff, 0x83, 0xe0, 0x07, 0xc0, 0x00, 
	0x7f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xff, 0x83, 0xe0, 0x07, 0xc0, 
	0x00, 0x7f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xff, 0x83, 0xe0, 0x07, 
	0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xff, 0x83, 0xe0, 
	0x07, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x01, 0xff, 0x83, 
	0xe0, 0x07, 0xc0, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xe1, 0xff, 
	0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xe1, 
	0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 
	0xe1, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 
	0x83, 0xe1, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 0xfe, 
	0x0f, 0x83, 0xe1, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0xff, 
	0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0xff, 0xc1, 0xf0, 0x7c, 0x01, 0xff, 0x80, 0x03, 0xe0, 
	0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0xff, 0xc1, 0xf0, 0x7c, 0x01, 0xff, 0x80, 0x03, 
	0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0xff, 0xc1, 0xf0, 0x7c, 0x01, 0xff, 0x80, 
	0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0xff, 0xc1, 0xf0, 0x7c, 0x01, 0xff, 
	0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0xff, 0xc1, 0xe0, 0x7c, 0x01, 
	0xff, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0x00, 0x00, 0x00, 0x7c, 
	0x3e, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0x00, 0x00, 0x00, 
	0x7c, 0x3e, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0x00, 0x00, 
	0x00, 0x7c, 0x3e, 0x0f, 0x80, 0x03, 0xe0, 0xff, 0xfe, 0x0f, 0x83, 0xff, 0x00, 0x7c, 0x1f, 0x00, 
	0x00, 0x00, 0x7c, 0x3e, 0x0f, 0x80, 0x03, 0xe0, 0x7f, 0xfc, 0x0f, 0x83, 0xfe, 0x00, 0x7e, 0x1f, 
	0x00, 0x00, 0x00, 0xfc, 0x3e, 0x0f, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe0, 0x00, 0x7f, 
	0xe0, 0x07, 0xff, 0xff, 0xff, 0xc1, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe0, 0x00, 
	0x7f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc1, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 0xe0, 
	0x00, 0x7f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc1, 0xf0, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x0f, 0x83, 
	0xe0, 0x00, 0x7f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xc1, 0xf0, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x1f, 
	0x83, 0xe0, 0x00, 0x3f, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xe1, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 
	0xff, 0x83, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0x83, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x03, 0xff, 
	0xff, 0xff, 0xff, 0x83, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x03, 
	0xff, 0xff, 0xff, 0xff, 0x83, 0xe0, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif

