#ifndef GRID_HPP
#define GRID_HPP

#include <iostream>
#include <vector>

class Grid {

    public:

    /**
     * @brief Construct a new Grid object.
     * define the width and the height of the grid.
     * 
     * @param width width of the grid
     * @param height height of the grid 
     */
    Grid(int width, int height);

    /**
     * @brief check if the grid is empty
     * 
     * @return true if no row is empty
     * @return false if a row or many rows is (are) empty.
     */
    bool isEmpty();

    /**
     * @brief 
     * 
     * @param row 
     * @return true 
     * @return false 
     */
    bool isRowEmpty(int row);

    /**
    * @brief 
    * 
    */
    void next();

    /**
     * @brief 
     * 
     */
    void random();

    /**
     * @brief 
     * 
     */
    void reverse();

    /**
     * @brief 
     * 
     */
    void reset();

    /**
     * @brief initializes the grid.
     * 
     * places booleans in grid and set 
     * theirs default value to false.
     * 
     */
    void initialize();

    /**
     * @brief Get the Width object
     * 
     * @return int 
     */
    int getWidth() const;

    /**
     * @brief Get the Height object
     * 
     * @return int 
     */
    int getHeight() const;

    /**
     * @brief 
     * 
     */
    void launch();

    void stop();

    bool get(int row, int col);

    void update();

    bool launched() const;

    void updateCell(int row, int col, std::vector<std::vector<bool>> const& grid);

    bool inRange(int row, int col) const;

    void set(int row, int col, bool value);

    std::vector<std::vector<bool>> copy() const;

    private:

    const int m_width;
    const int m_height;

    bool m_isLaunched;
    std::vector<std::vector<bool>> m_grid;

};

#endif