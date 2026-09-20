// Celcius to Fahrenheit
double cf(double x){
    return ((x*1.8)+32);
}
// Fahrenheit to Celcius
double fc(double x){
    return ((x-32)/1.8);
}
// Kelvin to Celcius
double kc(double x){
    return (x - 273.15);
}
// Kelvin to Fahrenheit
double kf(double x){
    return ((1.8*x) - 459.67);
}
// Celsius to Kelvin
double ck(double x){
    return (x + 273.15);
}
// Fahrenheit to Kelvin
double fk(double x){
    return ((x - 32)/1.8 + 273.15);
}

/*void temperature(double x, double& a, double& b, double& y, double& j, double& k, double& i){
    a = (x*1.8)+32;
    b = (x-32)/1.8;
    y = x - 273.15;
    j = (1.8*x) - 459.67;
    k =  x + 273.15;
    i = (x - 32)/1.8 + 273.15;
}*/