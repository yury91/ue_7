#include <list>
#include <string>
using namespace std;

// -----------------------------------------------------------------------------------
// Klasse Produkt
// -----------------------------------------------------------------------------------

class Produkt {
protected:
	double nettopreis; // der Nettopreis
	string produktnummer; // die Produktnummer
	string name; // der Name des Produktes
	int anzahlVerkauft; // die Anzahl von diesem Produkt verkaufter Artikel
public:

	// Konstruktor (die Anzahl verkaufter Produkte wird zuf�llig gesetzt)
	Produkt(string produktNr, string Name, double nettoPr);

	// liefert den Bruttopreis als um 19% erhoehter Nettopreis
	double getBruttoPreis(){return nettopreis*1.19;};

	// liefert den Nettopreis
	double getNettoPreis(){return nettopreis;};

	// erhoeht den Nettopreis um x Prozent
	// Beispielwert fuer x: 50 (50%)
	void erhoeheNettopreis(double x);

	// liefert die Anzahl verkaufter Artikel zurueck
	int getAnzahl();

	friend ostream &operator<<(ostream &out, Produkt &p);

	string kategorie();

virtual	void prepare();
};


// -----------------------------------------------------------------------------------
// Klasse Kaffee
// -----------------------------------------------------------------------------------
class Kaffee : public Produkt{

private:
	string Roestgrad;
	string Region;

public:
	Kaffee(string produktNr, string Name, double nettoPr, string Roestgrad, string Region);
	void prepare();

};


// -----------------------------------------------------------------------------------
// Klasse ProduktListe
// -----------------------------------------------------------------------------------

class ProduktListe{
private:
	list<Produkt*> liste; // Liste, um Pointer auf Produkte zu speichern
public:
	// Destruktor: L�sche dynamisch allokierten Speicher von Produkten in der Liste
	~ProduktListe();

	// fuegt ein Produkt in die Liste hinzu
	// Hinweis: Das Produkt muss dynamisch erzeugt sein
	void operator+=(Produkt* p);
};

// -----------------------------------------------------------------------------------
// Klasse Kakao
// -----------------------------------------------------------------------------------

class Kakao : public Produkt{
private:
	string marke = "Nesquik";
public:
	Kakao(string produktNr, string Name, double nettoPr);
	void prepare();
};
