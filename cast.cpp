#include "cast.h"
#include <algorithm>

void cast::addActor(const std::string& actor) {
    if (!actor.empty()) {
        actors.push_back(actor);
    }
}

void cast::removeActor(const std::string& actor) {
    actors.erase(std::remove(actors.begin(), actors.end(), actor), actors.end());
}

const std::vector<std::string>& cast::getActors() const {
    return actors;
}

bool cast::hasActor(const std::string& actor) const {
    return std::find(actors.begin(), actors.end(), actor) != actors.end();
}

void cast::clearCast() {
    actors.clear();
}

size_t cast::size() const {
    return actors.size();
}