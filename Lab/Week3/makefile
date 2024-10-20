# Tên chương trình
TARGET = user_management

# Trình biên dịch
CC = gcc

# Các flags của trình biên dịch
CFLAGS = -Wall

# Tập tin nguồn
SRC = user_management.c

# Tập tin đối tượng (tạo từ tập tin nguồn)
OBJ = $(SRC:.c=.o)

# Quy tắc mặc định để biên dịch chương trình
all: $(TARGET)

# Quy tắc biên dịch chương trình từ tập tin đối tượng
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

# Quy tắc biên dịch các tập tin .c thành .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Quy tắc dọn dẹp các tập tin biên dịch
clean:
	rm -f $(OBJ) $(TARGET)
