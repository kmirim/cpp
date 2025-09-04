#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

# define IDEAS 100

class Brain {
    private: 
        std::string _ideas[IDEAS];
    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();
        Brain &operator=(const Brain &other);

        const std::string &getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};

#endif