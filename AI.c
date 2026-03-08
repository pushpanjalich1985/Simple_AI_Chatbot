#include <stdio.h>// Standard input/output library
#include <string.h>// String maipulation functions(strcpy, strlen, strstr)
#include <ctype.h>// Chararcter handling functions(tolower, isalpha)
#include <stdlib.h>//standard library functions(rand, srand)
#include <time.h>// Time function(time) for random number generation
#include <unistd.h>// POSIX functions(sleep)



#define MAX_RESPONSE 256 // Maximum length for AI response
#define MAX_INPUT 100 // Maximum length for user input

// Function to convert string to lowercase
void to_lowercase(char *str) { // Convert string to lowercase
    for (int i = 0; str[i]; i++) { //
        str[i] = tolower(str[i]); 
    }
}

// Function to get AI response based on user input
char* get_ai_response(const char *user_input) {
    static char response[MAX_RESPONSE];
    char input_lower[MAX_INPUT];
    
    // Copy and convert input to lowercase
    strcpy(input_lower, user_input);
    to_lowercase(input_lower);
    
    // Pattern matching - simple AI logic
    if (strstr(input_lower, "hello") != NULL || strstr(input_lower, "hi") != NULL) {
        strcpy(response, "Hello there! How can I help you today?");
    }
    else if (strstr(input_lower, "how are you") != NULL) {
        strcpy(response, "I'm just a program, but I'm functioning well! How about you?");
    }
    else if (strstr(input_lower, "name") != NULL) {
        strcpy(response, "I'm Clarie, your simple AI assistant!");
    }
    else if (strstr(input_lower, "weather") != NULL) {
        strcpy(response, "I don't have access to weather data, but I hope it's nice where you are!");
    }
    else if (strstr(input_lower, "joke") != NULL) {
        strcpy(response, "Why don't scientists trust atoms? Because they make up everything!");
    }
    else if (strstr(input_lower, "thank") != NULL) {
        strcpy(response, "You're welcome! Is there anything else I can help with?");
    }
    else if (strstr(input_lower, "bye") != NULL || strstr(input_lower, "exit") != NULL) {
        strcpy(response, "Goodbye! Thanks for chatting with me!");
    }
    else if (strstr(input_lower, "help") != NULL) {
        strcpy(response, "I can chat about simple topics. Try asking about my name, tell me hello, or ask for a joke!");
    }
    else {
        // Default responses for unrecognized input
        char *default_responses[] = {
            "That's interesting! Tell me more.",
            "I see. What else would you like to know?",
            "Could you rephrase that?",
            "I'm still learning! Can you ask me something else?",
            "Interesting point! What's on your mind?"
        };
        
        // Randomly select a default response
        int num_responses = sizeof(default_responses) / sizeof(default_responses[0]);
        int random_index = rand() % num_responses;
        strcpy(response, default_responses[random_index]);
    }
    
    return response;
}

// Function to simulate "thinking" with dots
void thinking_animation() {
    printf("AI is thinking");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}

int main() {
    char user_input[MAX_INPUT];
    
    // Seed random number generator
    srand(time(NULL));
    
    printf("=== Simple AI ChatBot ===\n");
    printf("Type 'bye' or 'exit' to quit\n");
    printf("Type 'help' for assistance\n\n");
    
    while (1) {
        printf("You: ");
        
        // Get user input
        if (fgets(user_input, sizeof(user_input), stdin) == NULL) {
            break;
        }
        
        // Remove newline character
        user_input[strcspn(user_input, "\n")] = 0;
        
        // Check for exit condition
        if (strlen(user_input) == 0) {
            continue;
        }
        
        char input_lower[MAX_INPUT];
        strcpy(input_lower, user_input);
        to_lowercase(input_lower);
        
        if (strcmp(input_lower, "bye") == 0 || strcmp(input_lower, "exit") == 0) {
            printf("AI: Goodbye! Have a great day!\n");
            break;
        }
        
        // Show thinking animation (optional)
        thinking_animation();
        
        // Get and display AI response
        char *ai_response = get_ai_response(user_input);
        printf("AI: %s\n\n", ai_response);
    }
    
    return 0;
}


