# 🚇 Delhi Metro Route Planner (DMRP)

A C++ based Delhi Metro Route Planning System that helps commuters find the optimal route between any two metro stations across multiple lines.

## 🔧 Features

- **Shortest Time Route** — Dijkstra's Algorithm (O(V log V))
- **Minimum Stops Route** — BFS (O(V+E))
- **Dynamic Station Closure** — Close multiple stations due to maintenance, system auto-reroutes
- **Real Delhi Metro Data** — Blue, Yellow, Red, Magenta, Violet Lines
- **Case Insensitive Input** — Type in any case, system handles it
- **Path Tracing** — Displays full route from source to destination

## 📊 Tech Stack

- Language: C++
- Data Structures: Unordered Map, Priority Queue, Vector, Queue
- Algorithms: Dijkstra's, BFS, Graph Traversal

## 🗺️ Metro Lines Covered

| Line | Route |
|------|-------|
| 🔴 Red | Rithala → Shaheed Sthal |
| 🟡 Yellow | Samaypur Badli → Millennium City Centre |
| 🔵 Blue | Dwarka Sector 21 → Noida Electronic City |
| 🟣 Magenta | Krishna Park Extension → Botanical Garden |
| 🟤 Violet | Kashmere Gate → Raja Nahar Singh |

## 🚀 How to Run

### Compile
```bash
g++ Metro_Route_Planner.cpp -o metro
```

### Run
```bash
./metro
```

## 💻 Example Output

NOTE : Write Station Name in ALL CAPS

Enter source station: **RITHALA**

Enter destination station: **KALKAJI MANDIR**

 
Enter closed stations one by one in ALL CAPS (press Enter when done):

Closed station: **KAROL BAGH**

Closed station: **HAUZ KHAS**

Closed station: 

Least time taken from **RITHALA** to **KALKAJI MANDIR** is 55 minutes

RITHALA -> ROHINI WEST -> ROHINI EAST -> PITAMPURA -> KOHAT ENCLAVE -> NETAJI SUBHASH PLACE -> KESHAV PURAM -> KANHAIYA NAGAR -> INDERLOK -> SHASTRI NAGAR -> PRATAP NAGAR -> PULBANGASH -> TIS HAZARI -> KASHMERE GATE -> CHANDNI CHOWK -> CHAWRI BAZAR -> NEW DELHI -> RAJIV CHOWK -> PATEL CHOWK -> CENTRAL SECRETARIAT -> KHAN MARKET -> JLN STADIUM -> JANGPURA -> LAJPAT NAGAR -> MOOLCHAND -> KAILASH COLONY -> NEHRU PLACE -> KALKAJI MANDIR
