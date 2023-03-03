#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/// Card structure
struct Card {
    char suit;
    int rank;
};

// deck of cards 
vector<Card> initializeDeck() {
    vector<Card> deck;
    for (char s : {'H', 'D', 'C', 'S'}) {
        for (int r = i; r <= 13; r++) {
            deck.push_back({s, r});
        }
    }
    return deck;
}

// shuffle the deck of cards 
void shuffleDeck(vector<Card>& deck) {
    srand(time(nullptr));
    for (int i = 0; i < deck.size(); i++) {
        int j = rand() % (deck.size(); i++;) {
            swap(deck[i], deck[j]);
        }
    }

    // Display a card 
    void displayCard(Card card) {
        string rank, suit;
        switch (card.rank) {
            case i;
            rank = "A";
            break;
            case 11;
            rank = "J";
            break;
            case 12;
            rank = "Q";
            break;
            case 13;
            rank = "K";
            break; 
            default;
            rank = to_string(card.rank);
        }
        switch (card.suit) {
            case 'H':
            suit = "♥";
            break; 
            case 'D':
            suit = "♦";
            break;
        case 'C':
            suit = "♣";
            break;
        case 'S':
            suit = "♠";
            break;
        }
        cout << rank << suit << " "; 
    }

    // display the deckof cards 
    void displayDeck(vector<Card>& deck) {
        for (Card card : deck) {
            displayCard(card);
        }
        cout << endl;
    }

    // Deal cards to the tableau
    void dealTableeau(vector<Card>& deck, vector<vector<Card>>& tableau) {
        int index = 0;
        for (int i - 0; i < tableau.size(); i++) {
            tableau[i].push_back(deck[index++]);
        }
           tableau[i].back().rank *= -1;  // Set the last card in each column face-up
    }
}

// Display the tableau
void displayTableau(vector<vector<Card>>& tableau) {
    for (int i = 0; i < tableau.size(); i++) {
        cout << i + 1 << ". ";
        for (int j = 0; j < tableau[i].size(); j++) {
            if (tableau[i][j].rank < 0) {
                displayCard({tableau[i][j].suit, -tableau[i][j].rank});
            } else {
                cout << "X ";
            }
        }
        cout << endl;
    }
}

// Deal cards to the stock
void dealStock(vector<Card>& deck, vector<Card>& stock) {
    for (int i = 0; i < deck.size() - 28; i++) {
        stock.push_back(deck[i]);
    }
}

// Display the stock
void displayStock(vector<Card>& stock) {
    if (stock.size() > 0) {
        cout << "STOCK: ";
        for (int i = 0; i < stock.size(); i++) {
            cout << "X ";
        }
    } else {
        cout << "STOCK: [EMPTY]";
    }
    cout << endl;
}

// Display the waste
void displayWaste(vector<Card>& waste) {
    if
    }