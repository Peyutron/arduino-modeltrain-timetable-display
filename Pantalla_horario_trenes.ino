//Pantalla de informacion llegada de trenes con "3.5" TFT LCD Shield" en Arduino UNO
//Sin pantalla Tactil

#include <Adafruit_GFX.h> // Hardware-specific library
#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;
#define BLACK   0x0000  
#define WHITE   0xFFFF
#define GREY    0x7BEF
#define YELLOW  0xFFE0
#define GREEN   0x2D00
#define RED     0xF800
uint8_t hh, mm, ss; //containers for current time
uint8_t conv2d(const char* p)
{
    uint8_t v = 0;
    if ('0' <= *p && *p <= '9') v = *p - '0';
    return 10 * v + *++p - '0';
}
void setup()
{
    // put your setup code here, to run once:
    tft.reset();
    uint16_t identifier = tft.readID();
    if (identifier == 0xEFEF) identifier = 0x9486;
    tft.begin(identifier);
   
    hh = conv2d(__TIME__);
    mm = conv2d(__TIME__ + 3);
    ss = conv2d(__TIME__ + 6);
}

void loop()
{ 
  tft.fillScreen(WHITE); 
  tft.setRotation(1);
  tft.setCursor(82,8); //Posicion del cursor
  tft.setTextSize(2); //Tamaño de la fuente
  tft.setTextColor(BLACK); //Color de la fuente en rojo
  tft.println("Llegadas|ARRIVALS"); //Texto a escribir
  tft.setCursor(400,6); //Posicion del cursor
  tft.setTextSize(2); //Tamaño de la fuente
  tft.setTextColor(GREEN); //Color de la fuente en rojo
  tft.println("adif"); //Texto a escribir
  tft.setTextSize(1);
  tft.setCursor(5,50); //Posicion del cursor
  tft.println("Horario");
  tft.setCursor(82,50); //Posicion del cursor
  tft.println("Procedencia");
  tft.setCursor(275,50); //Posicion del cursor
  tft.println("Tren");
  tft.setCursor(335,50); //Posicion del cursor
  tft.println("Via");
  tft.setCursor(370,50); //Posicion del cursor
  tft.println("Observaciones");
  
  tft.setCursor(275,70); //Posicion del cursor
  tft.println("AVE");
  tft.setCursor(275,100); //Posicion del cursor
  tft.println("Alvia");
  tft.setCursor(275,130); //Posicion del cursor
  tft.println("Intercity");
  tft.setCursor(275,160); //Posicion del cursor
  tft.println("Intercity");
  tft.setCursor(275,190); //Posicion del cursor
  tft.println("Intercity");
  tft.setCursor(275,220); //Posicion del cursor
  tft.println("Alvia");
  tft.setCursor(275,250); //Posicion del cursor
  tft.println("Intercity");
  tft.setCursor(275,280); //Posicion del cursor
  tft.println("Regional");
  
  tft.fillRect(0, 60, 72, 300, GREEN);
  tft.setTextSize(2);  
  tft.setCursor(75,70); //Posicion del cursor
  tft.println("ALMERIA");
  tft.setCursor(75,100); //Posicion del cursor
  tft.println("MADRID CHAMARTIN");
  tft.setCursor(75,130); //Posicion del cursor
  tft.println("ALACANT");
  tft.setCursor(75,160); //Posicion del cursor
  tft.println("CADIZ");
  tft.setCursor(75,190); //Posicion del cursor
  tft.println("GIJON");
  tft.setCursor(75,220); //Posicion del cursor
  tft.println("SANTANDER");
  tft.setCursor(75,250); //Posicion del cursor
  tft.println("LORCA");
  tft.setCursor(75,280); //Posicion del cursor
  tft.println("PONFERRADA");
  
  tft.setCursor(335,70); //Posicion del cursor
  tft.println("4");
  tft.setCursor(335,100); //Posicion del cursor
  tft.println("1");
  tft.setCursor(335,130); //Posicion del cursor
  tft.println("1");
  tft.setCursor(335,160); //Posicion del cursor
  tft.println("2");
  tft.setCursor(335,190); //Posicion del cursor
  tft.println("4");
  tft.setCursor(335,220); //Posicion del cursor
  tft.println("3");
  tft.setCursor(335,250); //Posicion del cursor
  tft.println("3");
  tft.setCursor(335,280); //Posicion del cursor
  tft.println("1");
  tft.setTextColor(RED); 
  tft.setCursor(360,70); //Posicion del cursor
  tft.println(" +30");
  tft.setCursor(360,100); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,130); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,160); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,190); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,220); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,250); //Posicion del cursor
  tft.println("PREVISION");
  tft.setCursor(360,280); //Posicion del cursor
  tft.println("PREVISION");
  
  tft.setTextColor(WHITE);
  tft.setCursor(5,70); //Posicion del cursor
  tft.println("15:20");
  tft.setCursor(5,100); //Posicion del cursor
  tft.println("19:43");
  tft.setCursor(5,130); //Posicion del cursor
  tft.println("19:54");
  tft.setCursor(5,160); //Posicion del cursor
  tft.println("20:16");
  tft.setCursor(5,190); //Posicion del cursor
  tft.println("20:26");
  tft.setCursor(5,220); //Posicion del cursor
  tft.println("21:31");
  tft.setCursor(5,250); //Posicion del cursor
  tft.println("21:47");
  tft.setCursor(5,280); //Posicion del cursor
  tft.println("21:59");
  tft.setCursor(5,70); //Posicion del cursor
  tft.println("15:20");
  tft.setCursor(5,100); //Posicion del cursor
  tft.println("19:43");
  tft.setCursor(5,130); //Posicion del cursor
  tft.println("19:54");
  tft.setCursor(5,160); //Posicion del cursor
  tft.println("20:16");
  tft.setCursor(5,190); //Posicion del cursor
  tft.println("20:26");
  tft.setCursor(5,220); //Posicion del cursor
  tft.println("21:31");
  tft.setCursor(5,250); //Posicion del cursor
  tft.println("21:47");
  tft.setCursor(5,280); //Posicion del cursor
  tft.println("21:59");
  
   while (1) {
        if (++ss > 59) {
            ss = 0;
            mm++;
            if (mm > 59) {
                mm = 0;
                hh++;
                if (hh > 23) hh = 0;
            }
        }
        char buf[20];
        sprintf(buf, "%02d:%02d", hh, mm);
        tft.fillRect(0, 0, 72, 28, BLACK);
        tft.setTextSize(2); //Tamaño de la fuente
        tft.setTextColor(WHITE);
        tft.setCursor(5, 5);
        tft.print(buf);
        delay(1000);
    }
 
 }
