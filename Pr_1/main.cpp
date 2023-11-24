#include <iostream>
#include "song.h"
using namespace std;
int main() {
    int songId, releaseYear;
    float duration;
    string title, artist, album, genre, lyricsAuthor, language;


    cout << "Enter Song ID: ";
    cin >> songId;
    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, title);

    cout << "Enter Artist: ";
    getline(cin, artist);

    cout << "Enter Album: ";
    getline(cin, album);

    cout << "Enter Genre: ";
    getline(cin, genre);

    cout << "Enter Lyrics Author: ";
    getline(cin, lyricsAuthor);

    cout << "Enter Language: ";
    getline(cin, language);

    cout << "Enter Release Year: ";
    cin >> releaseYear;

    cout << "Enter Duration (in minutes): ";
    cin >> duration;

    // Створення об'єкту класу Song з введеними даними
    Song mySong(songId, title, artist, album, genre, lyricsAuthor,
                language, releaseYear, duration);

    // Виведення деталей про пісню
    cout << "\nSong Details:" << endl;
    mySong.displayDetails();

    return 0;
}
