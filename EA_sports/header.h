#ifndef EA_LIVESTREAM_CHAT_H
#define EA_LIVESTREAM_CHAT_H

#include <string>
#include <vector>

// Forward declarations
class ChatRoom;
class Poll;

class User {
public:
    User();
    void joinChat(ChatRoom* chat);
    void leaveChat(ChatRoom* chat);
    
private:
    int userId;
    std::string username;
};

class Message {
public:
    Message();
    void display();
    
private:
    int messageId;
    std::string content;
    std::string timestamp; // Alternatively, use a time type
};

class ChatRoom {
public:
    ChatRoom();
    void addMessage(const Message& msg);
    std::vector<Message> getMessages() const;
    
private:
    int roomId;
    std::string roomName;
};

class VoiceChatRoom : public ChatRoom {
public:
    VoiceChatRoom();
    void enableVoiceChat();
    void disableVoiceChat();
};

class VideoPlayer {
public:
    VideoPlayer();
    void play();
    void pause();
    void stop();
    
private:
    int playerId;
    std::string streamUrl;
};

class StreamingServer {
public:
    StreamingServer();
    void streamContent();
    
private:
    int serverId;
    std::string endpoint;
};

class Moderator {
public:
    Moderator();
    void banUser(const User& user);
    void moderate(ChatRoom* chat);
    
private:
    int modId;
};

class RewardSystem {
public:
    RewardSystem();
    void grantReward(const User& user, const Poll& poll);
    
private:
    int rewardId;
};

class EmojiGIF {
public:
    EmojiGIF();
    void render();
    
private:
    int id;
    std::string type;
};

class Poll {
public:
    Poll();
    void vote(const User& user, const std::string& option);
    
private:
    int pollId;
    std::string question;
};

#endif // EA_LIVESTREAM_CHAT_H
