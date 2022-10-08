#ifndef __STD_VECTOR_HPP__
#define __STD_VECTOR_HPP__
#pragma once

#include <vector>

#if (_MSC_VER <= 1500) // VC++2008 and earlier versions
namespace std
{
    template<class _Ty, class _Alloc = allocator<_Ty>>
    class StdVector : public vector<_Ty, _Alloc>
    {
    public:
        StdVector()
            : vector<_Ty, _Alloc>()
        {
        }

        _Ty* data()
        {
            if (this->size() < 1)
            {
                return NULL;
            }

            return &((*this)[0]);
        }

        const _Ty* data() const
        {
            if (this->size() < 1)
            {
                return NULL;
            }

            return &((*this)[0]);
        }
    };

} // namespace std

#    ifdef ReplaceStdVector
#        define vector StdVector
#    endif // ReplaceStdVector

#endif // VC++2008 and earlier versions

#endif // __STD_VECTOR_HPP__