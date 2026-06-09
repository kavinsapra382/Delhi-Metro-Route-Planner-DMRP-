#include<bits/stdc++.h>
using namespace std;

unordered_map<string,vector<pair<string,int>>> metro; //stations are stored as string(undirected graph)

//making edges
void addEdge(string a , string b , int time){
    metro[a].push_back({b,time});
    metro[b].push_back({a,time});
}

//building graph with 4 Main Metro Lines
void buildgraph(){

    // ── BLUE LINE ──────────────────────────
    addEdge("DWARKA SECTOR 21", "DWARKA SECTOR 8", 2);
    addEdge("DWARKA SECTOR 8", "DWARKA SECTOR 9", 2);
    addEdge("DWARKA SECTOR 9", "DWARKA SECTOR 10", 2);
    addEdge("DWARKA SECTOR 10", "DWARKA SECTOR 11", 2);
    addEdge("DWARKA SECTOR 11", "DWARKA SECTOR 12", 2);
    addEdge("DWARKA SECTOR 12", "DWARKA SECTOR 13", 2);
    addEdge("DWARKA SECTOR 13", "DWARKA SECTOR 14", 2);
    addEdge("DWARKA SECTOR 14", "DWARKA", 2);
    addEdge("DWARKA", "DWARKA MOR", 2);
    addEdge("DWARKA MOR", "NAWADA", 2);
    addEdge("NAWADA", "UTTAM NAGAR WEST", 2);
    addEdge("UTTAM NAGAR WEST", "UTTAM NAGAR EAST", 2);
    addEdge("UTTAM NAGAR EAST", "JANAKPURI WEST", 3);
    addEdge("JANAKPURI WEST", "JANAKPURI EAST", 2);
    addEdge("JANAKPURI EAST", "TILAK NAGAR", 2);
    addEdge("TILAK NAGAR", "SUBHASH NAGAR", 2);
    addEdge("SUBHASH NAGAR", "TAGORE GARDEN", 2);
    addEdge("TAGORE GARDEN", "RAJOURI GARDEN", 2);
    addEdge("RAJOURI GARDEN", "RAMESH NAGAR", 2);
    addEdge("RAMESH NAGAR", "MOTI NAGAR", 2);
    addEdge("MOTI NAGAR", "KIRTI NAGAR", 2);
    addEdge("KIRTI NAGAR", "SHADIPUR", 2);
    addEdge("SHADIPUR", "PATEL NAGAR", 2);
    addEdge("PATEL NAGAR", "RAJENDRA PLACE", 2);
    addEdge("RAJENDRA PLACE", "KAROL BAGH", 2);
    addEdge("KAROL BAGH", "JHANDEWALAN", 2);
    addEdge("JHANDEWALAN", "RAMAKRISHNA ASHRAM MARG", 2);
    addEdge("RAMAKRISHNA ASHRAM MARG", "RAJIV CHOWK", 2);
    addEdge("RAJIV CHOWK", "BARAKHAMBA ROAD", 2);
    addEdge("BARAKHAMBA ROAD", "MANDI HOUSE", 2);
    addEdge("MANDI HOUSE", "PRAGATI MAIDAN", 2);
    addEdge("PRAGATI MAIDAN", "INDRAPRASTHA", 2);
    addEdge("INDRAPRASTHA", "YAMUNA BANK", 3);

    // BLUE LINE MAIN BRANCH (NOIDA)
    addEdge("YAMUNA BANK", "AKSHARDHAM", 3);
    addEdge("AKSHARDHAM", "MAYUR VIHAR 1", 2);
    addEdge("MAYUR VIHAR 1", "MAYUR VIHAR EXTENSION", 2);
    addEdge("MAYUR VIHAR EXTENSION", "NEW ASHOK NAGAR", 2);
    addEdge("NEW ASHOK NAGAR", "NOIDA SECTOR 15", 3);
    addEdge("NOIDA SECTOR 15", "NOIDA SECTOR 16", 2);
    addEdge("NOIDA SECTOR 16", "NOIDA SECTOR 18", 2);
    addEdge("NOIDA SECTOR 18", "BOTANICAL GARDEN", 3);
    addEdge("BOTANICAL GARDEN", "GOLF COURSE", 2);
    addEdge("GOLF COURSE", "NOIDA CITY CENTRE", 2);
    addEdge("NOIDA CITY CENTRE", "NOIDA SECTOR 34", 2);
    addEdge("NOIDA SECTOR 34", "NOIDA SECTOR 52", 2);
    addEdge("NOIDA SECTOR 52", "NOIDA SECTOR 61", 2);
    addEdge("NOIDA SECTOR 61", "NOIDA SECTOR 59", 2);
    addEdge("NOIDA SECTOR 59", "NOIDA SECTOR 62", 2);
    addEdge("NOIDA SECTOR 62", "NOIDA ELECTRONIC CITY", 3);

    // BLUE LINE VAISHALI BRANCH
    addEdge("YAMUNA BANK", "LAXMI NAGAR", 2);
    addEdge("LAXMI NAGAR", "NIRMAN VIHAR", 2);
    addEdge("NIRMAN VIHAR", "PREET VIHAR", 2);
    addEdge("PREET VIHAR", "KARKARDUMA", 2);
    addEdge("KARKARDUMA", "ANAND VIHAR ISBT", 2);
    addEdge("ANAND VIHAR ISBT", "KAUSHAMBI", 2);
    addEdge("KAUSHAMBI", "VAISHALI", 3);

    // ── YELLOW LINE ────────────────────────
    addEdge("SAMAYPUR BADLI", "ROHINI SECTOR 18 19", 3);
    addEdge("ROHINI SECTOR 18 19", "HAIDERPUR BADLI MOR", 2);
    addEdge("HAIDERPUR BADLI MOR", "JAHANGIRPURI", 2);
    addEdge("JAHANGIRPURI", "ADARSH NAGAR", 3);
    addEdge("ADARSH NAGAR", "AZADPUR", 2);
    addEdge("AZADPUR", "MODEL TOWN", 2);
    addEdge("MODEL TOWN", "GTB NAGAR", 2);
    addEdge("GTB NAGAR", "VISHWAVIDYALAYA", 2);
    addEdge("VISHWAVIDYALAYA", "VIDHAN SABHA", 2);
    addEdge("VIDHAN SABHA", "CIVIL LINES", 2);
    addEdge("CIVIL LINES", "KASHMERE GATE", 2);
    addEdge("KASHMERE GATE", "CHANDNI CHOWK", 3);
    addEdge("CHANDNI CHOWK", "CHAWRI BAZAR", 2);
    addEdge("CHAWRI BAZAR", "NEW DELHI", 2);
    addEdge("NEW DELHI", "RAJIV CHOWK", 2);
    addEdge("RAJIV CHOWK", "PATEL CHOWK", 2);
    addEdge("PATEL CHOWK", "CENTRAL SECRETARIAT", 2);
    addEdge("CENTRAL SECRETARIAT", "UDYOG BHAWAN", 2);
    addEdge("UDYOG BHAWAN", "LOK KALYAN MARG", 2);
    addEdge("LOK KALYAN MARG", "JOR BAGH", 2);
    addEdge("JOR BAGH", "INA", 2);
    addEdge("INA", "AIIMS", 2);
    addEdge("AIIMS", "GREEN PARK", 2);
    addEdge("GREEN PARK", "HAUZ KHAS", 2);
    addEdge("HAUZ KHAS", "MALVIYA NAGAR", 2);
    addEdge("MALVIYA NAGAR", "SAKET", 2);
    addEdge("SAKET", "QUTAB MINAR", 3);
    addEdge("QUTAB MINAR", "CHHATARPUR", 2);
    addEdge("CHHATARPUR", "SULTANPUR", 2);
    addEdge("SULTANPUR", "GHITORNI", 2);
    addEdge("GHITORNI", "ARJAN GARH", 3);
    addEdge("ARJAN GARH", "GURU DRONACHARYA", 2);
    addEdge("GURU DRONACHARYA", "SIKANDERPUR", 2);
    addEdge("SIKANDERPUR", "MG ROAD", 2);
    addEdge("MG ROAD", "IFFCO CHOWK", 2);
    addEdge("IFFCO CHOWK", "MILLENNIUM CITY CENTRE GURUGRAM", 3);

    // ── RED LINE ───────────────────────────
    addEdge("RITHALA", "ROHINI WEST", 2);
    addEdge("ROHINI WEST", "ROHINI EAST", 2);
    addEdge("ROHINI EAST", "PITAMPURA", 2);
    addEdge("PITAMPURA", "KOHAT ENCLAVE", 2);
    addEdge("KOHAT ENCLAVE", "NETAJI SUBHASH PLACE", 2);
    addEdge("NETAJI SUBHASH PLACE", "KESHAV PURAM", 2);
    addEdge("KESHAV PURAM", "KANHAIYA NAGAR", 2);
    addEdge("KANHAIYA NAGAR", "INDERLOK", 2);
    addEdge("INDERLOK", "SHASTRI NAGAR", 2);
    addEdge("SHASTRI NAGAR", "PRATAP NAGAR", 2);
    addEdge("PRATAP NAGAR", "PULBANGASH", 2);
    addEdge("PULBANGASH", "TIS HAZARI", 2);
    addEdge("TIS HAZARI", "KASHMERE GATE", 2);
    addEdge("KASHMERE GATE", "SHASTRI PARK", 2);
    addEdge("SHASTRI PARK", "SEELAMPUR", 2);
    addEdge("SEELAMPUR", "WELCOME", 2);
    addEdge("WELCOME", "SHAHDARA", 2);
    addEdge("SHAHDARA", "MANSAROVAR PARK", 2);
    addEdge("MANSAROVAR PARK", "JHILMIL", 2);
    addEdge("JHILMIL", "DILSHAD GARDEN", 2);
    addEdge("DILSHAD GARDEN", "SHAHEED NAGAR", 2);
    addEdge("SHAHEED NAGAR", "RAJ BAGH", 2);
    addEdge("RAJ BAGH", "MAJOR MOHIT SHARMA RAJENDRA NAGAR", 2);
    addEdge("MAJOR MOHIT SHARMA RAJENDRA NAGAR", "SHYAM PARK", 2);
    addEdge("SHYAM PARK", "MOHAN NAGAR", 2);
    addEdge("MOHAN NAGAR", "ARTHALA", 2);
    addEdge("ARTHALA", "HINDON RIVER", 2);
    addEdge("HINDON RIVER", "SHAHEED STHAL NEW BUS ADDA", 3);

    // ── MAGENTA LINE ───────────────────────
    addEdge("KRISHNA PARK EXTENSION", "JANAKPURI WEST", 2);
    addEdge("JANAKPURI WEST", "DABRI MOR", 3);
    addEdge("DABRI MOR", "DASHRATHPURI", 2);
    addEdge("DASHRATHPURI", "PALAM", 2);
    addEdge("PALAM", "SADAR BAZAR CANTONMENT", 2);
    addEdge("SADAR BAZAR CANTONMENT", "TERMINAL 1 IGI AIRPORT", 3);
    addEdge("TERMINAL 1 IGI AIRPORT", "SHANKAR VIHAR", 2);
    addEdge("SHANKAR VIHAR", "VASANT VIHAR", 2);
    addEdge("VASANT VIHAR", "MUNIRKA", 2);
    addEdge("MUNIRKA", "RK PURAM", 2);
    addEdge("RK PURAM", "IIT", 2);
    addEdge("IIT", "HAUZ KHAS", 2);
    addEdge("HAUZ KHAS", "PANCHSHEEL PARK", 2);
    addEdge("PANCHSHEEL PARK", "CHIRAG DELHI", 2);
    addEdge("CHIRAG DELHI", "GREATER KAILASH", 2);
    addEdge("GREATER KAILASH", "NEHRU ENCLAVE", 2);
    addEdge("NEHRU ENCLAVE", "KALKAJI MANDIR", 2);
    addEdge("KALKAJI MANDIR", "OKHLA NSIC", 2);
    addEdge("OKHLA NSIC", "SUKHDEV VIHAR", 2);
    addEdge("SUKHDEV VIHAR", "JAMIA MILLIA ISLAMIA", 2);
    addEdge("JAMIA MILLIA ISLAMIA", "OKHLA VIHAR", 2);
    addEdge("OKHLA VIHAR", "JASOLA VIHAR SHAHEEN BAGH", 2);
    addEdge("JASOLA VIHAR SHAHEEN BAGH", "KALINDI KUNJ", 2);
    addEdge("KALINDI KUNJ", "OKHLA BIRD SANCTUARY", 2);
    addEdge("OKHLA BIRD SANCTUARY", "BOTANICAL GARDEN", 3);

    // ── VIOLET LINE ────────────────────────
    addEdge("KASHMERE GATE", "LAL QUILA", 2);
    addEdge("LAL QUILA", "JAMA MASJID", 2);
    addEdge("JAMA MASJID", "DELHI GATE", 2);
    addEdge("DELHI GATE", "ITO", 2);
    addEdge("ITO", "MANDI HOUSE", 2);
    addEdge("MANDI HOUSE", "JANPATH", 2);
    addEdge("JANPATH", "CENTRAL SECRETARIAT", 2);
    addEdge("CENTRAL SECRETARIAT", "KHAN MARKET", 2);
    addEdge("KHAN MARKET", "JLN STADIUM", 2);
    addEdge("JLN STADIUM", "JANGPURA", 2);
    addEdge("JANGPURA", "LAJPAT NAGAR", 2);
    addEdge("LAJPAT NAGAR", "MOOLCHAND", 2);
    addEdge("MOOLCHAND", "KAILASH COLONY", 2);
    addEdge("KAILASH COLONY", "NEHRU PLACE", 2);
    addEdge("NEHRU PLACE", "KALKAJI MANDIR", 2);
    addEdge("KALKAJI MANDIR", "GOVIND PURI", 2);
    addEdge("GOVIND PURI", "HARKESH NAGAR OKHLA", 2);
    addEdge("HARKESH NAGAR OKHLA", "JASOLA APOLLO", 2);
    addEdge("JASOLA APOLLO", "SARITA VIHAR", 2);
    addEdge("SARITA VIHAR", "MOHAN ESTATE", 2);
    addEdge("MOHAN ESTATE", "TUGHLAKABAD", 2);
    addEdge("TUGHLAKABAD", "BADARPUR BORDER", 2);
    addEdge("BADARPUR BORDER", "SARAI", 2);
    addEdge("SARAI", "NHPC CHOWK", 2);
    addEdge("NHPC CHOWK", "MEWALA MAHARAJPUR", 2);
    addEdge("MEWALA MAHARAJPUR", "SECTOR 28", 2);
    addEdge("SECTOR 28", "BADKAL MOR", 2);
    addEdge("BADKAL MOR", "OLD FARIDABAD", 2);
    addEdge("OLD FARIDABAD", "NEELAM CHOWK AJRONDA", 2);
    addEdge("NEELAM CHOWK AJRONDA", "BATA CHOWK", 2);
    addEdge("BATA CHOWK", "ESCORTS MUJESAR", 2);
    addEdge("ESCORTS MUJESAR", "SANT SURDAS SIHI", 2);
    addEdge("SANT SURDAS SIHI", "RAJA NAHAR SINGH", 3);
}

//dynamic rerouting if any station is closed due to maintenance
void ClosedStation(string stn){

    metro.erase(stn); //removed stn from graph

    //remvoing all edges connecting that stn
    for(auto& stops : metro){
        vector<pair<string,int>> updated;
        for(auto ngh : stops.second){
            if(ngh.first != stn){
                updated.push_back(ngh);
            }
        }
        stops.second = updated;
    }
}

void LeastTimeRoute(string src , string dest){
    unordered_map<string,int> reachingtime;
    for(auto stops : metro){
        reachingtime[stops.first] = INT_MAX;
    }
    unordered_map<string,string> parent; //for path tracing
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> pq; //{time,station}
    reachingtime[src]=0;
    pq.push({reachingtime[src],src});
    parent[src]= "-1";
    while(!pq.empty()){
        int nodetime = pq.top().first;
        string node = pq.top().second;
        pq.pop();
        for(auto ngh : metro[node]){
            string adjstn = ngh.first;
            int wt = ngh.second;
            int adjstntime = nodetime + wt;
            if(adjstntime < reachingtime[adjstn]){
                reachingtime[adjstn] = adjstntime;
                pq.push({reachingtime[adjstn],adjstn});
                parent[adjstn] = node;
            }
        }
    }

    if(reachingtime.find(dest) == reachingtime.end() || reachingtime[dest] == INT_MAX) {
    cout << "Station is Unreachable\n";
    } else {
    cout << "Least time taken from " << src << " to " << dest << " is " << reachingtime[dest] << " minutes" << endl;
    }

    //tracing path
    if(reachingtime.find(dest) != reachingtime.end() && reachingtime[dest] != INT_MAX){
        string start = dest;
        vector<string> path;
        while(start != "-1"){
            path.push_back(start);
            start = parent[start];
        }
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++){
            cout << path[i];
            if(i != path.size()-1) cout << " -> ";
        }
    }
}

int main(){
    buildgraph();
    string src,dest,stn;
    cout << "NOTE : Write Station Name in ALL CAPS" << endl;
    cout << "Enter source station: ";
    getline(cin, src);
    
    cout << "Enter destination station: ";
    getline(cin, dest);
    cout << " " << endl;
    cout << "Enter closed stations one by one in ALL CAPS (press Enter when done):" << endl;
    while(true){
        cout << "Closed station: ";
        getline(cin, stn);
        if(stn == "") break;        // empty input = done
        ClosedStation(stn);         // close each station
    }

    LeastTimeRoute(src , dest);
}