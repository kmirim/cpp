#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

# define IDEAS 100;


class Brain {
    private: 
        std::string _ideas[IDEAS];
    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();
        Brain &operator=(const Brain &other);

        const std::string &getIdeas(int index) const;
}

#endif