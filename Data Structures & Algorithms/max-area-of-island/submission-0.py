class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        if not grid:
            return 0

        max_area = 0
        rows, cols = len(grid), len(grid[0])
        visit = set()
        directions = [[-1, 0], [1, 0], [0, -1], [0,1]]

        def bfs(r, c, area=0):
            nonlocal max_area
            q = collections.deque()
            visit.add((r,c))

            q.append((r,c))

            while q:
                row, col = q.popleft()

                for dr, dc in directions:
                    r,c = row+dr, col+dc

                    if(r in range(rows) and c in range(cols) and grid[r][c] and (r,c) not in visit):
                        area += grid[r][c]
                        q.append((r,c))
                        visit.add((r,c))
            
            max_area = max(max_area, area)


        for r in range(rows):
            for c in range(cols):

                if (grid[r][c] and (r,c) not in visit):
                    bfs(r, c, 1)
        
        return max_area
        