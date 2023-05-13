int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);
	pinMode(e, OUTPUT);
	pinMode(f, OUTPUT);
	pinMode(g, OUTPUT);
}

void loop() {
	zero();
	delay(1000);

	one();
	delay(1000);

	two();
	delay(1000);
	
	three();
	delay(1000);

	four();
	delay(1000);

	five();
	delay(1000);
	
	six();
	delay(1000);

	seven();
	delay(1000);

	eight();
	delay(1000);
	
	nine();
	delay(1000);
}

void zero() {
	digitalWrite(a, HIGH);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, HIGH);
	digitalWrite(e, HIGH);
	digitalWrite(f, HIGH);
	digitalWrite(g, LOW);
}

void one() {
	digitalWrite(a, LOW);
	digitalWrite(b, HIGH);
	digitalWrite(c, HIGH);
	digitalWrite(d, LOW);
	digitalWrite(e, LOW);
	digitalWrite(f, LOW);
	digitalWrite(g, LOW);
}

void two() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, LOW); 
	digitalWrite(d, HIGH); 
	digitalWrite(e, HIGH); 
	digitalWrite(f, LOW);
	digitalWrite(g, HIGH);
}

void three() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, HIGH); 
	digitalWrite(e, LOW); 
	digitalWrite(f, LOW); 
	digitalWrite(g, HIGH); 
}

void four() {
	digitalWrite(a, LOW); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, LOW); 
	digitalWrite(e, LOW); 
	digitalWrite(f, HIGH); 
	digitalWrite(g, HIGH); 
}

void five() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, LOW); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, HIGH); 
	digitalWrite(e, LOW); 
	digitalWrite(f, HIGH); 
	digitalWrite(g, HIGH); 
}

void six() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, LOW); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, HIGH); 
	digitalWrite(e, HIGH); 
	digitalWrite(f, HIGH); 
	digitalWrite(g, HIGH); 
}

void seven() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, LOW); 
	digitalWrite(e, LOW); 
	digitalWrite(f, LOW); 
	digitalWrite(g, LOW); 
}

void eight() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, HIGH); 
	digitalWrite(e, HIGH); 
	digitalWrite(f, HIGH); 
	digitalWrite(g, HIGH); 
}

void nine() {
	digitalWrite(a, HIGH); 
	digitalWrite(b, HIGH); 
	digitalWrite(c, HIGH); 
	digitalWrite(d, LOW); 
	digitalWrite(e, LOW); 
	digitalWrite(f, HIGH); 
	digitalWrite(g, HIGH); 
}

