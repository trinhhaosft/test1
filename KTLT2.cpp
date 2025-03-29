/*#include <bits/stdc++.h>
using namespace std;
struct phanso{
     int t,m;
};
void nhap(phanso &a){
    char slash;
    cin>>a.t>> slash>>a.m;
}
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void rutgon(phanso &a){
        int ucln = gcd(a.t, a.m);
        a.t /= ucln;
        a.m /= ucln;
        if (a.m < 0) {
            a.t = -a.t;
            a.m = -a.m;
        }
}
void tinhtong(phanso a, phanso b){
    phanso kq;
    kq.m=a.m*b.m;
    kq.t=a.t*b.m+b.t*a.m;
    rutgon(kq); // thiếu rút gọn
    cout<<kq.t<<"/"<<kq.m<<endl;
}
void tinhhieu(phanso a, phanso b){
    phanso kq;
    kq.m=a.m*b.m;
    kq.t=a.t*b.m-b.t*a.m; // thiếu rút gọn
    rutgon(kq);
    cout<<kq.t<<"/"<<kq.m<<endl;
}
void tinhtich(phanso a, phanso b){
    phanso kq;
    kq.m=a.m*b.m;
    kq.t=a.t*b.t; // thiếu rút gọn
    rutgon(kq);
    cout<<kq.t<<"/"<<kq.m<<endl;
}
void tinhthuong(phanso a, phanso b){
    phanso kq;
    kq.t=a.t*b.m;
    kq.m=a.m*b.t;
    rutgon(kq);
    cout<<kq.t<<"/"<<kq.m<<endl;
}
void quydong(phanso &a, phanso &b) {
    int chung = a.m * b.m / gcd(a.m, b.m);
    a.t = a.t * (chung / a.m);
    b.t = b.t * (chung / b.m);
    a.m = b.m = chung;
}
void sosanh(phanso a, phanso b) {
    long long v1 = (long long)a.t * b.m;
    long long v2 = (long long)b.t * a.m;
    if (v1 > v2) cout << "1" << endl;
    else if (v1 < v2) cout << "-1" << endl;
    else cout << "0" << endl;
}
int main(){
    phanso a,b;
    nhap(a);
    nhap(b);
    rutgon(a);
    rutgon(b);
    tinhtong(a, b);
    tinhhieu(a, b);
    tinhtich(a, b);
    tinhthuong(a, b);
  
    cout<<a.t<<"/"<<a.m<<" "<<b.t<<"/"<<b.m<<endl;
    phanso a_qd = a, b_qd = b;
    quydong(a_qd, b_qd);
    cout << a_qd.t << "/" << a_qd.m << " " << b_qd.t << "/" << b_qd.m << endl;
    sosanh(a,b);
    return 0; 
}  */
// bài 2
/*#include <bits/stdc++.h>
using namespace std;
struct toa{
   int x,y;
};
void nhap(toa &a){
    cin>>a.x>>a.y;
}
void doixung(toa a){
    int tung=a.x*-1;
    int hoanh=a.y*-1;
    int o=a.x*-1;
    int o1=a.y*-1;
    cout<<tung<<" "<<a.y<<endl;
    cout<<a.x<<" "<<hoanh<<endl;
    cout<<o<<" "<<o1<<endl;
}
void kc(toa const &a, const toa &b){
    double d1=b.x-a.x;
    double d2=b.y-a.y;
    double kc1=sqrt(d1*d1+d2*d2);
    cout<<fixed<< setprecision(6)<<kc1; 
}
int main(){
    toa d1,d2,d3;
    nhap(d1);
    nhap(d2);
    nhap(d3);
    doixung(d1);
    kc(d2,d3);
    return 0;
}*/
// bài 9
/*#include <bits/stdc++.h>
using namespace std;
struct phuc {
    int t, a;
};
void nhap(phuc &a) {
    cin >> a.t >> a.a;
}
phuc tong(phuc a, phuc b) {
    phuc res;
    res.t = a.t + b.t;
    res.a = a.a + b.a;
    return res;
}
phuc tongall(phuc a[], int n) {
    phuc sum = {0, 0};
    for(int i = 0; i < n; i++) {
        sum = tong(sum, a[i]);
    }
    return sum;
}
phuc tich(phuc a, phuc b) {
    phuc kq;
    kq.t = a.t * b.t - a.a * b.a;
    kq.a = a.t * b.a + a.a * b.t;
    return kq;  
}
phuc tichall(phuc a[], int n) {
    phuc tich1 = {1, 0};
    for(int i = 0; i < n; i++) {
        tich1 = tich(tich1, a[i]);
    }
    return tich1;
}
void xuat(phuc p) {
    cout << p.t << (p.a >= 0 ? "+" : "") << p.a << "i";
}
int main() {
    int n; 
    cin >> n;
    phuc a[100];
    for(int i = 0; i < n; i++) {
        nhap(a[i]);
    }
    phuc sum = tongall(a, n);
    xuat(sum);
    cout << endl;
    phuc product = tichall(a, n);
    xuat(product);
    return 0; 
}*/
// baif 10
#include <bits/stdc++.h>
using namespace std;
struct hang{
  int ma;
  string ten;
  int sl;
  int dongia;
  int slt;
  int bh;
};
void nhap(hang &a){
    cin>>a.ma;
    cin.ignore();
    getline(cin, a.ten);
    cin>>a.sl>>a.dongia>>a.slt>>a.bh;
}
void hangton(hang a[], int n){
    int max=a[0].slt;
    for(int i=0;i<n;i++){
       if(a[i].slt>max){
        max=a[i].slt;
       }
       cout<<a[i].ma<<" "<<a[i].ten<<endl;
    }
}
void hangton1(hang a[],int n){
    int min=a[0].slt;
    for(int i=0;i<n;i++){
        if(a[i].slt<min){
            min=a[i].slt;
        }
        cout<<a[i].ma<<" "<<a[i].ten<<endl;
    }
}
void giatien(hang a[], int n){
    int max=a[0].dongia;
    for(int i=0;i<n;i++){
        if(a[i].dongia>max){
         max=a[i].dongia;
        }
        cout<<a[i].ma<<" "<<a[i].ten<<endl;
     }
}
void baohanh(hang a[], int n){
    for(int i=0;i<n;i++){
        if(a[i].bh>12){
            cout<<a[i].ma<<" "<<a[i].ten<<endl;
        }
     }
}
void sapxep(hang a[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i].slt > a[j].slt) {
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i].ma << " " << a[i].ten 
             << " (Ton: " << a[i].slt << ")\n";
    }
}
int main() {
    int n;
    cin >> n;
    hang ds[100];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    hangton(ds, n);
    hangton1(ds, n);
    giatien(ds, n);
    baohanh(ds, n);
    sapxep(ds, n); 
    return 0;
}


