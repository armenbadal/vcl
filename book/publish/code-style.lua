function CodeBlock(block)
  for _, class in ipairs(block.classes) do
    if class == "c" then
      block.classes:insert("numberLines")
      break
    end
  end

  return block
end
