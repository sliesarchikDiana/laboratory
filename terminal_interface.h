#ifndef TERMINAL_INTERFACE_H
#define TERMINAL_INTERFACE_H
#include "movie_interface.h"

class TerminalInterface : public MovieInterface {
public:
    void run() override;
    
private:
    static void showMenu();
    void addMovie();
    void listMovies() const;
    void viewMovie() const;
    void deleteMovie();
    void clearMovies();

    void static editMovie(movie& m);
    static void editBaseProperties(movie& m);
};

#endif