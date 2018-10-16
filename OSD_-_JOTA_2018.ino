#include <TVout.h>
#include <fontALL.h>

TVout TV;

void setup() {
  TV.begin(PAL,120,96);
  TV.select_font(font4x6);
  TV.clear_screen();
}

void loop() {
//Pagina 1
  fullcall();
//Pagina 2
  TV.clear_screen();
  call();
  TV.println(" ");
  TV.println("Scouting Jan Campert");
  TV.println(" ");
  TV.delay(1000);
  TV.print("Bevers       ");
  TV.delay(1000);
  TV.println("Welpen");
  TV.println(" ");
  TV.delay(1000);
  TV.print("Scouts       ");
  TV.delay(1000);
  TV.println("Waterscouts");
  TV.println(" ");
  TV.delay(1000);
  TV.print("Explorers    ");
  TV.delay(1000);
  TV.println("Wildevaart");
  TV.println(" ");
  TV.delay(1000);
  TV.print("Stam         ");
  TV.delay(1000);
  TV.println("Plusscouts");
  TV.delay(2500);
  TV.clear_screen();  
  call();
  TV.println("Scouting Jan Campert");
  TV.delay(1000);
  TV.println("Wil je een keer komen kijken");
  TV.delay(1000);
  TV.println("Bezoek onze website");
  TV.println(" ");
  TV.delay(1000);
  TV.println("www.jancampertgroep.nl");
  TV.delay(10000);
  TV.clear_screen();  
//Pagina 3
  fullcall();
//Pagina 4
  TV.clear_screen();
  call();
  TV.select_font(font6x8);
  TV.println("Hier zijn wij");
  TV.select_font(font4x6);
  TV.println(" ");
  TV.delay(1000);
  TV.print(" 80/40 meter    ");
  TV.delay(1000);
  TV.println(" 20/17 meter");
  TV.delay(1000);
  TV.println("     2 meter");
  TV.delay(1000);
  TV.print("      70 cm     ");
  TV.delay(1000);
  TV.println("    23 cm");
  TV.delay(1000);
  TV.println("In FM, SSB en ATV");
  TV.delay(10000);
  TV.clear_screen();    
}
void call() {
  TV.select_font(font4x6);
  TV.println(" ");
  TV.select_font(font6x8);
  TV.println("PG6JC/J - JO22md");
  TV.select_font(font4x6);
  TV.println(" ");
  TV.delay(500);
}

void fullcall() {
  TV.clear_screen();
  TV.select_font(font6x8);
  TV.println(" ");
  TV.println("PG6JC/J - JO22md");
  TV.println(" ");
  TV.println("       JOTA 2018");
  TV.println(" ");
  TV.println("Scouting");
  TV.println("     Jan Campert");
  TV.println("Nieuweweg 19a");
  TV.println("       Tienhoven");
  TV.select_font(font4x6);
  TV.delay(5000);
}

