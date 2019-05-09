const int Thymine = 11;   

const int Guanine = 9; 

const int Cytosine = 12; 

const int Adenine = 8;

const int btnThymine = 3;
const int btnAdenine = 6;
const int btnCytosine = 4;
const int btnGuanine = 7;
const int btnOn = 2;
const int btnOff = 5;      

// variables will change:
int btnThymineState = 0;  
int btnAdenineState = 0;
int btnCytosineState = 0;
int btnGuanineState = 0;
int btnOnState = 0;
int btnOffState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(Adenine, OUTPUT);

  pinMode(Guanine, OUTPUT);

  pinMode(Thymine, OUTPUT);

  pinMode(Cytosine, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(btnThymine, INPUT);
  pinMode(btnCytosine, INPUT);
  pinMode(btnGuanine, INPUT);
  pinMode(btnAdenine, INPUT);
  pinMode(btnOn, INPUT);
  pinMode(btnOff, INPUT);
}

void loop() {
  /*digitalWrite(Thymine, HIGH);
  digitalWrite(Adenine, HIGH);
 digitalWrite(Cytosine, HIGH);
  digitalWrite(Guanine, HIGH);*/
  // read the state of the pushbutton value:
  btnThymineState = digitalRead(btnThymine);
  btnAdenineState = digitalRead(btnAdenine);
  btnCytosineState = digitalRead(btnCytosine);
  btnGuanineState = digitalRead(btnGuanine);
  btnOnState = digitalRead(btnOn);
  btnOffState = digitalRead(btnOff);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (btnThymineState == HIGH) {
    // turn LED on:
    digitalWrite(Thymine, HIGH);

  } else {
    // turn LED off:
    digitalWrite(Thymine, LOW);

  }

  if (btnAdenineState == HIGH) {
    // turn LED on:
    digitalWrite(Adenine, HIGH);

  } else {
    // turn LED off:
    digitalWrite(Adenine, LOW);

  }

  if (btnCytosineState == HIGH) {
    // turn LED on:
    digitalWrite(Cytosine, HIGH);
 
  } else {
    // turn LED off:
    digitalWrite(Cytosine, LOW);

  }

  if (btnGuanineState == HIGH) {
    // turn LED on:
    digitalWrite(Guanine, HIGH);

  } else {
    // turn LED off:
    digitalWrite(Guanine, LOW);

  }

  if (btnOnState == HIGH) {
    // turn LED on:
    digitalWrite(Thymine, HIGH);

    digitalWrite(Adenine, HIGH);

    digitalWrite(Guanine, HIGH);

    digitalWrite(Cytosine, HIGH);
 
  } 


}
