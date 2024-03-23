{
  //Program care calculeaza cu buna aproximatie numarul de zile dintre doua date calendaristice
  Int_t zi0, luna0, an0, zi1, luna1, an1;  //0=initial, 1=prezent
  Double_t aux0, aux1=0, aux2, nOfDays;

  cout << "Introduceti data calendaristica a primei masuratori:" << endl;
  cout << "ziua: "; cin >> zi0;
  cout << "luna: "; cin >> luna0;
  cout << "anul: "; cin >> an0;

  cout << "Introduceti data calendaristica a masuratorii prezente:" << endl;
  cout << "ziua: "; cin >> zi1;
  cout << "luna: "; cin >> luna1;
  cout << "anul: "; cin >> an1;


  if(an0%4==0) {
    aux0=366-(luna0-1)*30.5-zi0;  //nr. de zile pana la sfarsitul anului initial (an bisect)
  }
  if(an0%4!=0) {
    aux0=365-(luna0-1)*30.41667-zi0;  //nr. de zile pana la sfarsitul anului initial (an nebisect)
  }

  for(Int_t x=an0+1; x<=an1-1; x++)
  {
    if(x%4==0) aux1++;  //nr. de ani bisecti in intervalul din for
  }
  aux2=(an1-an0-1-aux1)*365;  //nr. de zile totale a anilor nebisecti din interval
  aux1=aux1*366;  //nr. de zile totale a anilor bisecti din interval

  if(an1%4==0) {
    nOfDays=aux0+aux1+aux2+(luna1-1)*30.5+zi1;
    cout << "Nr. de zile de la masuratoarea initiala la cea prezenta: " << nOfDays << endl;
  }
  if(an1%4!=0) {
    nOfDays=aux0+aux1+aux2+(luna1-1)*30.41667+zi1;
    cout << "Nr. de zile de la masuratoarea initiala la cea prezenta: " << nOfDays << endl;
  }
}
