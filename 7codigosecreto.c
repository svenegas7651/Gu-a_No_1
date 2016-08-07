#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <cstring>

 class BreakingTheCode {
     public:
     string decodingEncoding(string code, string message) {
         int i,j;
         int a[30]={0};
         string k;
         k="";
         for(i=0;i<code.size();i++)
         {
             a[code[i]-‘a‘+1]=i+1;
         }
         if(‘0‘<=message[0] && message[0]<=‘9‘)
         {
             for(i=0;i<message.size();i=i+2)
             {
                 int x=(message[i]-‘0‘)*10;
                 x=x+(message[i+1]-‘0‘);
                 k=k+code[x-1];
             }
         }

         else
         {
             for(i=0;i<message.size();i++)
             {
                 int x=message[i]-‘a‘+1,y;
                 y=a[x];
                 char h;
                 h=‘0‘+y/10;
                 k=k+h;
                 h=‘0‘+y%10;
                 k=k+h;
             }
         }
         return k;
     }
 };

 // CUT begin
 ifstream data("BreakingTheCode.sample");

 string next_line() {
     string s;
     getline(data, s);
     return s;
 }

 template <typename T> void from_stream(T &t) {
     stringstream ss(next_line());
     ss >> t;
 }

 void from_stream(string &s) {
     s = next_line();
 }

 template <typename T>
 string to_string(T t) {
     stringstream s;
     s << t;
     return s.str();
 }

 string to_string(string t) {
     return "\"" + t + "\"";
 }

 bool do_test(string code, string message, string __expected) {
     time_t startClock = clock();
     BreakingTheCode *instance = new BreakingTheCode();
     string __result = instance->decodingEncoding(code, message);
     double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
     delete instance;

     if (__result == __expected) {
         cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
         return true;
     }
     else {
         cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
         cout << "           Expected: " << to_string(__expected) << endl;
         cout << "           Received: " << to_string(__result) << endl;
         return false;
     }
 }

 int run_test(bool mainProcess, const set<int> &case_set, const string command) {
     int cases = 0, passed = 0;
     while (true) {
         if (next_line().find("--") != 0)
             break;
         string code;
         from_stream(code);
         string message;
         from_stream(message);
         next_line();
         string __answer;
         from_stream(__answer);

         cases++;
         if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
             continue;

         cout << "  Testcase #" << cases - 1 << " ... ";
         if ( do_test(code, message, __answer)) {
             passed++;
         }
     }
     if (mainProcess) {
         cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
         int T = time(NULL) - 1438865246;
         double PT = T / 60.0, TT = 75.0;
         cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
         cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
     }
     return 0;
 }

 int main(int argc, char *argv[]) {
     cout.setf(ios::fixed, ios::floatfield);
     cout.precision(2);
     set<int> cases;
     bool mainProcess = true;
        for (int i = 1; i < argc; ++i) {
         if ( string(argv[i]) == "-") {
             mainProcess = false;
         } else {
             cases.insert(atoi(argv[i]));
         }
     }
     if (mainProcess) {
         cout << "BreakingTheCode (250 Points)" << endl << endl;
     }
     return run_test(mainProcess, cases, argv[0]);
	 system("PAUSE");
 }
