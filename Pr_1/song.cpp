#include "song.h"
#include <iostream>

using namespace std;


Song::Song()
{

}

Song::Song(int id, const string& songTitle, const string& artistName,
           const string& albumName, const string& songGenre,
           const string& author, const string& lang,
           int year, float songDuration) :
    id(id), title(songTitle), artist(artistName), album(albumName),
    genre(songGenre), lyricsAuthor(author), language(lang),
    releaseYear(year), duration(songDuration) {}

Song::Song(const Song &otherSong)
{
    this ->id = otherSong.id;
    this ->title = otherSong.title;
    this ->artist = otherSong.artist;
    this ->album = otherSong.album;
    this ->genre = otherSong.genre;
    this ->lyricsAuthor = otherSong.lyricsAuthor;
    this ->language = otherSong.language;
    this ->releaseYear = otherSong.releaseYear;
    this ->duration = otherSong.duration;
}

Song::~Song()
{

}


void Song::displayDetails() {
    cout << "Song ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Artist: " << artist << endl;
    cout << "Album: " << album << endl;
    cout << "Genre: " << genre << endl;
    cout << "Lyrics Author: " << lyricsAuthor << endl;
    cout << "Language: " << language << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Duration: " << duration << " minutes" << endl;
}
