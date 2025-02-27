@startuml

' Define classes with attributes and methods (attributes/methods can be expanded as needed)

class User {
  - userId: int
  - username: string
  + joinChat(chat: ChatRoom)
  + leaveChat(chat: ChatRoom)
}

class ChatRoom {
  - roomId: int
  - roomName: string
  + addMessage(msg: Message)
  + getMessages(): List<Message>
}

class Message {
  - messageId: int
  - content: string
  - timestamp: datetime
  + display()
}

class VoiceChatRoom {
  + enableVoiceChat()
  + disableVoiceChat()
}

class VideoPlayer {
  - playerId: int
  - streamUrl: string
  + play()
  + pause()
  + stop()
}

class StreamingServer {
  - serverId: int
  - endpoint: string
  + streamContent()
}

class Moderator {
  - modId: int
  + banUser(user: User)
  + moderate(chat: ChatRoom)
}

class RewardSystem {
  - rewardId: int
  + grantReward(user: User, poll: Poll)
}

class EmojiGIF {
  - id: int
  - type: string
  + render()
}

class Poll {
  - pollId: int
  - question: string
  + vote(user: User, option: string)
}

' Define Relationships

User "1" -- "*" ChatRoom : joins >
ChatRoom "1" -- "*" Message : contains >
VoiceChatRoom --|> ChatRoom
Moderator --> ChatRoom : moderates
Moderator --> User : moderates
VideoPlayer --> StreamingServer : connects to >
RewardSystem --> Poll : uses participation

' Optionally, you can also indicate that ChatRoom supports EmojiGIF messages
ChatRoom ..> EmojiGIF : displays

@enduml
