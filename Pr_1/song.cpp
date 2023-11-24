#include "song.h"
#include <iostream>

using namespace std;


Song::Song(int id, const string& songTitle, const string& artistName,
           const string& albumName, const string& songGenre,
           const string& author, const string& lang,
           int year, float songDuration) :
    songId(id), title(songTitle), artist(artistName), album(albumName),
    genre(songGenre), lyricsAuthor(author), language(lang),
    releaseYear(year), duration(songDuration) {}


void Song::displayDetails() {
    cout << "Song ID: " << songId << endl;
    cout << "Title: " << title << endl;
    cout << "Artist: " << artist << endl;
    cout << "Album: " << album << endl;
    cout << "Genre: " << genre << endl;
    cout << "Lyrics Author: " << lyricsAuthor << endl;
    cout << "Language: " << language << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Duration: " << duration << " minutes" << endl;
}
