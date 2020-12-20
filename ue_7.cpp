#include "ue_8.h"

Produkt::Produkt(string produktNr, string Name, double nettoPr)
{
  nettopreis = nettoPr;
  produktnummer = produktNr;
  name = Name;
  anzahlVerkauft = 0;
}


ostream& operator<<(ostream &os, Produkt &p)
{
  os << p.name; //<< " , " << p.produktnummer <<;// " , " << p.nettopreis;
  return os;
}

	string Produkt::kategorie()
  {
    if(nettopreis<7)
      return "GEHOBEN";
    else
      return "HOCH";
  }
