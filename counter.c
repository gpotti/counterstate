/**
 * @file counter.c
 * @brief Counter State Transition API
 *
 * This file defines the API for managing a counter's state,
 * including incrementing and resetting the counter.
 */

#include <stdbool.h>

/// Maximum counter value
#define MAX_COUNTER 100

/**
 * @struct Counter
 * @brief Represents the state of a counter.
 */
typedef struct {
    int value; /**< Current counter value */
} Counter;

/**
 * @brief Initializes the counter to 0.
 * 
 * @param counter Pointer to the Counter object.
 */
void initCounter(Counter* counter) {
    counter->value = 0;
}

/**
 * @brief Increments the counter by 1.
 * 
 * @param counter Pointer to the Counter object.
 * @return true if the increment was successful, false if the counter reached MAX_COUNTER.
 */
bool incrementCounter(Counter* counter) {
    if (counter->value < MAX_COUNTER) {
        counter->value++;
        return true;
    }
    return false;
}

/**
 * @brief Resets the counter to 0.
 * 
 * @param counter Pointer to the Counter object.
 */
void resetCounter(Counter* counter) {
    counter->value = 0;
}

