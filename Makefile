SRC := $(shell find . -name '*.c')
BUILD_DIR := .
OUTPUTS := $(patsubst ./%.c, $(BUILD_DIR)/%.o, $(SRC))

all: $(OUTPUTS)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	bear -- gcc $< -o $@

run: $(OUTPUTS)
	@echo "Specify a file to run: make run target=dir/whatever"

$(BUILD_DIR)/%.run: %.c
	@mkdir -p $(dir $@)
	bear -- gcc $< -o $@
	./$@

%: %.c
	@mkdir -p $(dir $(BUILD_DIR)/$*)
	bear -- gcc $< -o $(BUILD_DIR)/$*
	./$(BUILD_DIR)/$*

clean:
	rm -rf $(BUILD_DIR)
